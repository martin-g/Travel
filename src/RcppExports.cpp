// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// C_make_altPtr
SEXP C_make_altPtr(SEXP x, SEXP name);
RcppExport SEXP _AltPtr_C_make_altPtr(SEXP xSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(C_make_altPtr(x, name));
    return rcpp_result_gen;
END_RCPP
}
// C_getAltData1
SEXP C_getAltData1(SEXP x);
RcppExport SEXP _AltPtr_C_getAltData1(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getAltData1(x));
    return rcpp_result_gen;
END_RCPP
}
// C_getAltData2
SEXP C_getAltData2(SEXP x);
RcppExport SEXP _AltPtr_C_getAltData2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getAltData2(x));
    return rcpp_result_gen;
END_RCPP
}
// get_int_value
int get_int_value(SEXP x, int i);
RcppExport SEXP _AltPtr_get_int_value(SEXP xSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(get_int_value(x, i));
    return rcpp_result_gen;
END_RCPP
}
// C_run_fuse_thread
void C_run_fuse_thread();
RcppExport SEXP _AltPtr_C_run_fuse_thread() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    C_run_fuse_thread();
    return R_NilValue;
END_RCPP
}
// C_stop_fuse_thread
void C_stop_fuse_thread();
RcppExport SEXP _AltPtr_C_stop_fuse_thread() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    C_stop_fuse_thread();
    return R_NilValue;
END_RCPP
}
// C_add_altrep_to_fuse
void C_add_altrep_to_fuse(SEXP x, SEXP name);
RcppExport SEXP _AltPtr_C_add_altrep_to_fuse(SEXP xSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type name(nameSEXP);
    C_add_altrep_to_fuse(x, name);
    return R_NilValue;
END_RCPP
}
// C_list_altrep
SEXP C_list_altrep();
RcppExport SEXP _AltPtr_C_list_altrep() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(C_list_altrep());
    return rcpp_result_gen;
END_RCPP
}
// C_set_print_location
void C_set_print_location(SEXP x);
RcppExport SEXP _AltPtr_C_set_print_location(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    C_set_print_location(x);
    return R_NilValue;
END_RCPP
}
// C_get_print_location
SEXP C_get_print_location();
RcppExport SEXP _AltPtr_C_get_print_location() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(C_get_print_location());
    return rcpp_result_gen;
END_RCPP
}
// C_set_mountpoint
void C_set_mountpoint(SEXP path);
RcppExport SEXP _AltPtr_C_set_mountpoint(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type path(pathSEXP);
    C_set_mountpoint(path);
    return R_NilValue;
END_RCPP
}
// C_get_mountpoint
SEXP C_get_mountpoint();
RcppExport SEXP _AltPtr_C_get_mountpoint() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(C_get_mountpoint());
    return rcpp_result_gen;
END_RCPP
}
// initial_print_file
void initial_print_file();
RcppExport SEXP _AltPtr_initial_print_file() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    initial_print_file();
    return R_NilValue;
END_RCPP
}
// close_print_file
void close_print_file();
RcppExport SEXP _AltPtr_close_print_file() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    close_print_file();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_AltPtr_C_make_altPtr", (DL_FUNC) &_AltPtr_C_make_altPtr, 2},
    {"_AltPtr_C_getAltData1", (DL_FUNC) &_AltPtr_C_getAltData1, 1},
    {"_AltPtr_C_getAltData2", (DL_FUNC) &_AltPtr_C_getAltData2, 1},
    {"_AltPtr_get_int_value", (DL_FUNC) &_AltPtr_get_int_value, 2},
    {"_AltPtr_C_run_fuse_thread", (DL_FUNC) &_AltPtr_C_run_fuse_thread, 0},
    {"_AltPtr_C_stop_fuse_thread", (DL_FUNC) &_AltPtr_C_stop_fuse_thread, 0},
    {"_AltPtr_C_add_altrep_to_fuse", (DL_FUNC) &_AltPtr_C_add_altrep_to_fuse, 2},
    {"_AltPtr_C_list_altrep", (DL_FUNC) &_AltPtr_C_list_altrep, 0},
    {"_AltPtr_C_set_print_location", (DL_FUNC) &_AltPtr_C_set_print_location, 1},
    {"_AltPtr_C_get_print_location", (DL_FUNC) &_AltPtr_C_get_print_location, 0},
    {"_AltPtr_C_set_mountpoint", (DL_FUNC) &_AltPtr_C_set_mountpoint, 1},
    {"_AltPtr_C_get_mountpoint", (DL_FUNC) &_AltPtr_C_get_mountpoint, 0},
    {"_AltPtr_initial_print_file", (DL_FUNC) &_AltPtr_initial_print_file, 0},
    {"_AltPtr_close_print_file", (DL_FUNC) &_AltPtr_close_print_file, 0},
    {NULL, NULL, 0}
};

void init_logical_class(DllInfo *dll);
void init_integer_class(DllInfo *dll);
void init_real_class(DllInfo *dll);
RcppExport void R_init_AltPtr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    init_logical_class(dll);
    init_integer_class(dll);
    init_real_class(dll);
}
