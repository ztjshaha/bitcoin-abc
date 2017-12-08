// Copyright (c) 2016 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <wallet/test/wallet_test_fixture.h>

#include <chainparams.h>
#include <rpc/server.h>
#include <wallet/db.h>
#include <wallet/rpcdump.h>
#include <wallet/wallet.h>

WalletTestingSetup::WalletTestingSetup(const std::string &chainName)
    : TestingSetup(chainName),
      m_wallet(Params(), "mock", WalletDatabase::CreateMock()) {
    bool fFirstRun;
    g_address_type = OutputType::DEFAULT;
    g_change_type = OutputType::DEFAULT;
    m_wallet.LoadWallet(fFirstRun);
    RegisterValidationInterface(&m_wallet);

    RegisterWalletRPCCommands(tableRPC);
    RegisterDumpRPCCommands(tableRPC);
}

WalletTestingSetup::~WalletTestingSetup() {
    UnregisterValidationInterface(&m_wallet);
}
