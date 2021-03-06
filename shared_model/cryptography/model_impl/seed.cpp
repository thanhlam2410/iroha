/**
 * Copyright Soramitsu Co., Ltd. 2018 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "cryptography/seed.hpp"

#include "utils/string_builder.hpp"

namespace shared_model {
  namespace crypto {

    Seed::Seed(const std::string &seed) : Blob(seed) {}

    std::string Seed::toString() const {
      return detail::PrettyStringBuilder()
          .init("Seed")
          .append(Blob::hex())
          .finalize();
    }
  }  // namespace crypto
}  // namespace shared_model
