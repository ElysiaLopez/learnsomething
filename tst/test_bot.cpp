#include <gtest/gtest.h>
#include "action.h"
#include "hackathonbot.h"

TEST(HackathonTests, BasicAssertion) {
    EXPECT_NEAR(4, 4, 1e-4);
}

TEST(HackathonTests, BasicAssertion2) {
  EXPECT_NEAR(5, 5, 1e-4);
}

TEST(ActionTest, PleaseWork) {
  Action action;
  float a = action.getBalance();
  //bool b = action.buy(500);
  //EXPECT_EQ(b,false);
  EXPECT_NEAR(a,0,1e-4);
}

TEST(ActionTest, basicFucntions) {
  Action action;
  double bal = action.getBalance();
  EXPECT_NEAR(bal,0,1e-4);
  //bool s = action.sell(100);
  //EXPECT_EQ(s,true);
  /*bal = action.getBalance();
  EXPECT_NEAR(bal,100,1e-4);
  s = action.sell(20);
  EXPECT_EQ(s,false);
  s = action.buy(50);
  EXPECT_EQ(s,true);
  s = action.buy(20);
  EXPECT_EQ(s,false);
  bal = action.getBalance();
  EXPECT_NEAR(bal,50,1e-4)*/
}

TEST(HackatonTest, basicTests) {
  Action action;
  HackathonBot hackathonbot;
  
}