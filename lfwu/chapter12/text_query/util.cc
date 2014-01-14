#include "util.h"
const std::string MakePlural(size_t size,
                       const std::string& word,
                       const std::string& end) {
    return size > 1 ? (word + end) : word;
}
