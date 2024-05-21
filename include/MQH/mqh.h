#include <limits.h>
#include <utils/io_utils.h>
#include <utils/timer.h>

#include <algorithm>
#include <cassert>
#include <chrono>
#include <cmath>
#include <fstream>
#include <iostream>
#include <queue>
#include <string_view>
#include <unordered_set>
#include <vector>

#include "visited_list_pool.h"

// void index(
//     int,
//     int,
//     int,
//     const std::string&,
//     const std::string&);

void index(int n_pts, int d, int n_sample, const float* data_ptr, const std::string& index_data);

void index(int n_pts, int d, int n_sample, const std::string& data_path, const std::string& data_type,
           const std::string& index_data);

void index(int, int, int, char*, char*);

void search(int n_pts, int n_query, int d, int topk, float delta, int l0, int flag_, const std::string& kFrontPath,
            const std::string& kDataset, const std::string& kDataType, const std::string& kQueryType);

void search(int, int, int, int, float, int, int, char*, char*, char*, char*);

void ground_truth(int, int, int, char*, char*, char*);
