#ifndef BITCOIN_CHAINPARAMSCONSTANTS_H
#define BITCOIN_CHAINPARAMSCONSTANTS_H
/**
 * Chain params constants for each tracked chain.
 * @generated by contrib/devtools/chainparams/generate_chainparams_constants.py
 */

#include <primitives/blockhash.h>
#include <uint256.h>

namespace ChainParamsConstants {
    const BlockHash MAINNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("000000000000000000c6a7d1955ae242836586cef264d098219336b5a9fa1198");
    const uint256 MAINNET_MINIMUM_CHAIN_WORK = uint256S("0000000000000000000000000000000000000000014cd013e46c3d3c1b095bf6");
    const uint64_t MAINNET_ASSUMED_BLOCKCHAIN_SIZE = 206;
    const uint64_t MAINNET_ASSUMED_CHAINSTATE_SIZE = 3;

    const BlockHash TESTNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("00000000001b14cd0acfdc5b5acd72b5a6e3e4f17a346b50ac6d486747e3e3d4");
    const uint256 TESTNET_MINIMUM_CHAIN_WORK = uint256S("00000000000000000000000000000000000000000000006c7a5c1ddf5f3afb6f");
    const uint64_t TESTNET_ASSUMED_BLOCKCHAIN_SIZE = 55;
    const uint64_t TESTNET_ASSUMED_CHAINSTATE_SIZE = 2;
} // namespace ChainParamsConstants

#endif // BITCOIN_CHAINPARAMSCONSTANTS_H
