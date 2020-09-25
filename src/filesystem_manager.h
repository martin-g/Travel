#ifndef HEADER_FILESYSTEM_MANAGER
#define HEADER_FILESYSTEM_MANAGER

#include <string>
#include <map>
#include <memory>
#include "double_key_map.h"

#define MIN_CACHE_SIZE 4096
#define FILESYSTEM_WAIT_TIME 5
#define inode_type unsigned long

struct filesystem_file_data;
extern double_key_map<inode_type, std::string, filesystem_file_data> file_list;

/*
The function that reads the data from the file,
this function do not need to do the out-of-bound check.
Args: 
  file_data: The file info
  buffer: The buffer where the data will be written to
  offset: The offset of the file. The unit size is specified in file_data.unit_size.
  length: The length of the data. The unit size is specified in file_data.unit_size.
*/
typedef size_t (*file_data_func)(filesystem_file_data &file_data, void *buffer, size_t offset, size_t length);

/*
The struct that holds all data of a file
member variables:
  data_func: The function to read the data from the file
  private_data: A pointer that can be used to store some private data of the file
  file_size: The file size in bytes
  unit_size: The unit size of the data in bytes. The offset and length
             that are passed to the function data_func will be calculated based on this unit.
             The value does not have to match the true unit size, 
             it can be 1 if data_func supports reading 1 bytes from the file.
  cache_size: The write cache size. DO NOT TRY TO CHANGE IT!
  write_cache: All the changes to the data will be stored here by block. DO NOT TRY TO CHANGE IT!
*/
struct filesystem_file_data
{
  filesystem_file_data(file_data_func data_func,
                       void *private_data,
                       size_t file_size,
                       unsigned int unit_size = 1);
  file_data_func data_func;
  void *private_data;
  size_t file_size;
  unsigned int unit_size;
  size_t cache_size;
  std::map<size_t, std::shared_ptr<char[]>> write_cache;
};

/*
A struct to hold File name, full path and inode number
*/
struct filesystem_file_info
{
  std::string file_full_path;
  std::string file_name;
  size_t file_inode;
};

filesystem_file_info add_virtual_file(file_data_func data_func,
                                      void *private_data,
                                      size_t file_size,
                                      unsigned int unit_size = 1,
                                      const char *name = NULL);
bool remove_virtual_file(std::string name);
bool is_filesystem_running();

#endif