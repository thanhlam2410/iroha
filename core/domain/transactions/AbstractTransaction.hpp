#ifndef CORE_DOMAIN_TRANSACTIONS_ABSTRACTTRANSACTION_HPP_
#define CORE_DOMAIN_TRANSACTIONS_ABSTRACTTRANSACTION_HPP_

#include <stdio.h>

#include <string>
#include <vector>

namespace AbstractTransaction {
  std::string getRawData();

  enum TransactionType { 
      addPeer, modifyPeer, removePeer, transfer, signatory, signatoryAdd, signatoryDelete, domainDefinition,
      domainRenewal, aliasDefinition, aliasRenewal, assetDefinition, message, chaincodeInit, chaincodeInvoke,
      chaincodeUpdate, chaincodeDestroy, interchain
  };

  class AbstractTransaction {
  public:
      unsigned long long id;
      std::string hash;
      std::string prevTxHash;  // Assume chains of transactions
      TransactionType type;
      std::vector<unsigned char> signature;
      // Base64 signature;

      AbstractTransaction(
        std::string hash,
        std::vector<unsigned char> signature,
        privateKey(aPrivateKey) {

      }
  };
}  // namespace AbstractTransaction

#endif  // CORE_DOMAIN_TRANSACTIONS_ABSTRACTTRANSACTION_HPP_
