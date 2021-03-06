#ifndef FILL_VRHS_H
#define FILL_VRHS_H

#include <vector>
#include <complex>
#include <map>
#include <string>

#include "../mom_helpers/vrhs.h"
#include "../../data_structures/triangle.h"
#include "../../data_structures/edge.h"

void serialFillVrhs(std::map<std::string, std::string> &const_map,
												 std::vector<Triangle> &triangles,
												 std::vector<Edge> &edges,
												 std::complex<double> *vrhs);

#endif // FILL_VRHS_H
