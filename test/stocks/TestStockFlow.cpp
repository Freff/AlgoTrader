#include "../../googletest/googletest/include/gtest/gtest.h"
#include "../../googletest/googlemock/include/gmock/gmock.h"
#include "../../src/stocks/Stock.hpp"
#include "../../src/stocks/StockRegistry.hpp"
#include "../../src/algorithm/AlgorithmRegistry.hpp"
#include "../../src/algorithm/BasicInvestor.hpp"

using ::testing::_;

class MockStock : public Stock
{};

class IMockStockSubscriber : public IStockSubscriber
{
public:
    MOCK_METHOD0(tick, void());
    MOCK_METHOD0(updated, void());
    MOCK_METHOD0(tradingStart, void());
    MOCK_METHOD0(dayStart, void());
    MOCK_METHOD0(dayEnd, void());
    MOCK_METHOD0(tradingEnd, void());
};


TEST(StockFlowTest, main_flow_on_update)
{
    StockRegistry sr();
    AlgorithmRegistry ar();

    std::shared_ptr<Stock> stock = std::make_shared<Stock>();

    std::shared_ptr<IMockStockSubscriber> mock = std::make_shared<IMockStockSubscriber>();

    stock->registerSubscriber(mock);

    EXPECT_CALL(*mock, updated());

    stock->update();

}

TEST(StockFlowTest, main_flow_on_tick)
{
    StockRegistry sr();
    AlgorithmRegistry ar();

    std::shared_ptr<Stock> stock = std::make_shared<Stock>();

    std::shared_ptr<IMockStockSubscriber> mock = std::make_shared<IMockStockSubscriber>();

    stock->registerSubscriber(mock);

    EXPECT_CALL(*mock, tick());

    stock->tick();

}


TEST(StockFlowTest, algorithm_updates_on_stock_modifcation)
{
    StockRegistry sr();
    AlgorithmRegistry ar();

    std::shared_ptr<Stock> stock = std::make_shared<Stock>();

    std::shared_ptr<IMockStockSubscriber> mock = std::make_shared<IMockStockSubscriber>();

    stock->registerSubscriber(mock);

    EXPECT_CALL(*mock, tick());

    stock->tick();

}