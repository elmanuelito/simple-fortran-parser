void io_term();
int check();
void error_solved();
void io_set_output_to_std(int* flag_c);
void io_set_var(const char* svar_c, double* rval);
void io_print_version();
void iv_user_vel_add_from_v1v2v3(double* v1, double* v2, double* v3, int* bComputeGrad, int* bPolar, int* n1, int* n2, int* n3);
int it_incrementtime();
void it_setTmax(double* t_max_in);
double it_getdt();
int it_getntmax();
int ip_get_profile_polar_n(int* idb, int* iprof, int* ipol);
