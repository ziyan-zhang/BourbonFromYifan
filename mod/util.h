//
// Created by daiyi on 2020/02/02.
//

#ifndef LEVELDB_UTIL_H
#define LEVELDB_UTIL_H

#include <cstdint>
#include <cstdlib>
#include <ctime>
#include "db/db_impl.h"
#include "leveldb/slice.h"
#include "leveldb/env.h"


using std::string;
using std::vector;
using leveldb::Slice;


namespace adgMod {

    class FileLearnedIndexData;

    extern int MOD;
    extern bool string_mode;
    extern uint64_t key_multiple;
    extern uint32_t model_error;
    extern int block_restart_interval;
    extern uint32_t test_num_level_segments;
    extern uint32_t test_num_file_segments;
    extern int key_size;
    extern int value_size;
    extern leveldb::Env* env;
    extern leveldb::DBImpl* db;
    extern leveldb::ReadOptions read_options;
    extern leveldb::WriteOptions write_options;
    extern FileLearnedIndexData* file_data;
    extern uint64_t fd_limit;
    extern bool use_filter;
    extern bool restart_read;
    extern bool fresh_write;

    extern int file_allowed_seek;
    extern int level_allowed_seek;
    extern float reference_frequency;
    extern bool block_num_entries_recorded;
    extern bool level_learning_enabled;
    extern bool file_learning_enabled;
    extern uint64_t block_num_entries;
    extern uint64_t block_size;
    extern uint64_t entry_size;


    uint64_t ExtractInteger(const char* pos, size_t size);
//bool SearchNumEntriesArray(const std::vector<uint64_t>& num_entries_array, const uint64_t position, size_t* index, uint64_t* relative_position);
    string generate_key(const string& key);
    string generate_value(uint64_t value);
    uint64_t SliceToInteger(const Slice& slice);
    int compare(const Slice& slice, const string& string);
    bool operator<(const Slice& slice, const string& string);
    bool operator>(const Slice& slice, const string& string);
    bool operator<=(const Slice& slice, const string& string);
    bool operator>=(const Slice& slice, const string& string);
    uint64_t get_time_difference(timespec start, timespec stop);
}


#endif //LEVELDB_UTIL_H
