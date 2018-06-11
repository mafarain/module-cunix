int my_atoi(const char* nptr) {
	int res = 0;
	while (isspace((unsigned char)*nptr)) {
		nptr++;
	}
	char sign = *nptr;
	if (*nptr == '-' || *nptr == '+') {
		nptr++;
	}
	while (isdigit((unsigned char)*nptr)) {
		res = res * 10 - (*nptr++ - '0');
	}
	if (sign != '-') {
		res = -res;
	}
	return res;
}
