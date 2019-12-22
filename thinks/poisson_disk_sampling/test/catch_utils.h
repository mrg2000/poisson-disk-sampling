// Copyright(C) Tommy Hinks <tommy.hinks@gmail.com>
// This file is subject to the license terms in the LICENSE file
// found in the top-level directory of this distribution.

#pragma once

#include <exception>
#include <string>

#include "catch2/catch.hpp"

namespace thinks {

struct ExceptionContentMatcher : Catch::MatcherBase<std::exception> {
  explicit ExceptionContentMatcher(std::string target);

  bool match(const std::exception& matchee) const override; // NOLINT
  std::string describe() const override; // NOLINT

 private:
  std::string target_;
};

}  // namespace thinks
