
#include "../../googletest/googletest/include/gtest/gtest.h"
#include "../../src/finance/Wallet.hpp"

TEST(WalletTest, constructor_test)
{
    auto wallet = Wallet(10000);

    EXPECT_EQ(10000, wallet.getBalance());
}

TEST(WalletTest, transaction_returns_false_on_low_balance)
{
    auto wallet = Wallet(99);

    auto res = wallet.makeTransaction(100.0);

    EXPECT_FALSE(res);
    EXPECT_EQ(99, wallet.getBalance());
}

TEST(WalletTest, transaction_returns_true_on_good_balance)
{
    auto wallet = Wallet(1000);

    auto res = wallet.makeTransaction(100.0);

    EXPECT_TRUE(res);
    EXPECT_EQ(900, wallet.getBalance());
}

TEST(WalletTest, transaction_can_take_balance_to_zero)
{
    auto wallet = Wallet(100);

    auto res = wallet.makeTransaction(100.0);

    EXPECT_TRUE(res);
    EXPECT_EQ(0, wallet.getBalance());
}