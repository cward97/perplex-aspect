namespace meemum {
    extern "C" {
	int get_n_components();

	void get_component_amount(int *, double *);
	void get_component_name(int *, char *);

	double get_density();
	double get_expansivity();
	double get_heat_capacity();
	double get_melt_frac();

	void init();
	void minimize(double *, double *);
    }
}

