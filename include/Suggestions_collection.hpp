//
// Created by polinka on 25.03.2021.
//


#ifndef INCLUDE_SUGGESTIONS_COLLECTION_HPP_
#define INCLUDE_SUGGESTIONS_COLLECTION_HPP_
#include <nlohmann/json.hpp>
#include <string>

using json = nlohmann::json;

class Suggestions_collection {
 public:
  Suggestions_collection();
  void Update(json storage);
  json Suggest(const std::string& input);

 private:
  json suggestions_;
};

#endif  // INCLUDE_SUGGESTIONS_COLLECTION_HPP_