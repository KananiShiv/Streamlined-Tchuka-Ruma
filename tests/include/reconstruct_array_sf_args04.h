const char *packets[] = {
"\x00\x03\x03\xa0\x0e\xb6\xe1\xc3\x01\x00\x01\x88\x0e\xe9\x2a\x3a\x00\x00\x00\xaa\x00\x00\xa4\xb4",
"\x00\x03\x03\xa0\x0e\xb6\xe1\xc3\x00\x00\x02\x08\x0e\xe7\xf8\x3a\x00\x00\x00\x0a\x00\x00\x00\x14\x00\x00\x00\x1e\x00\x00\x00\x28",
"\x00\x03\x03\xa0\x0e\xb6\xe1\xc3\x00\xc0\x02\x08\x0e\xea\x08\x3a\x00\x00\x00\x82\x00\x00\x00\x8c\x00\x00\x00\x96\x00\x00\x00\xa0",
"\x00\x03\xff\xa0\x0e\xb6\xe1\xc3\x00\x40\x02\x08\x0e\xe8\xa8\x3a\x00\x00\x00\x32\x00\x00\x00\x3c\x00\x00\x00\x46\x00\x00\x00\x50",
"\x00\x03\x03\xa0\x0e\xb6\xe1\xc3\x00\x80\x02\x08\x0e\xe9\x58\x3a\x00\x00\x00\x5a\x00\x00\x00\x64\x00\x00\x00\x6e\x00\x00\x00\x78",
};
int reconstructed_array[] = {1897361756, 511234109, 2040558095, 299669925, 1854125204, 1147783809, 1808688013, 1528174380, 1122472434, 999190120, 480027813, 1773684600, 1495513586, 430636639, 668068513, 1213523779, 1627837088, 290430805, 479509009, 1697740483, };
int expected_array[] = {10, 20, 30, 40, 1854125204, 1147783809, 1808688013, 1528174380, 90, 100, 110, 120, 130, 140, 150, 160, 1627837088, 290430805, 479509009, 1697740483, };
unsigned int expected_num_elements = 12;

