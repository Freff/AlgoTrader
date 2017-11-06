
#include "../../googletest/googletest/include/gtest/gtest.h"
#include "../../src/finance/Wallet.hpp"

TEST(WalletTest, constructor_test)
{
    auto wallet = Wallet(10000);

    EXPECT_EQ(10000, wallet.getBalance());
}