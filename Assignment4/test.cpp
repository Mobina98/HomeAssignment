/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment4: Transformers classes
 */

#include <gtest/gtest.h>
#include <sstream>

#include "transformer.hpp"
#include "autobot.hpp"
#include "decepticon.hpp"
#include "minicon.hpp"

TEST(Transformer, CheckFireJump) {
    Transformer hero;
    ASSERT_TRUE(hero.fire());
    ASSERT_TRUE(hero.jump());
}

TEST(Transformer, CheckAmmoFuelName) {
    Transformer hero;
    hero.setFuel(70);
    EXPECT_EQ(hero.getAmmo(), 0);
    EXPECT_EQ(hero.getFuel(), 70);
    EXPECT_EQ("Untitled", hero.getName());
}

TEST(Autobot, CheckFire) {
    Autobot hero2("Optimus");
    ASSERT_TRUE(hero2.fire());
}

TEST(Autobot, CheckPowerColorName) {
    Autobot hero2("Optimus");
    hero2.setPowerOfBlaster(100);
    hero2.setColor("purple");
    EXPECT_EQ(hero2.getPowerOfBlaster(), 100);
    EXPECT_EQ(hero2.getColor(), "purple");
    EXPECT_EQ(hero2.getName(), "Optimus");
}

TEST(Decepticon, DecCheckFireJump) {
    Decepticon enemy;
    enemy.setName("Enemy");
    ASSERT_TRUE(enemy.fire());
    ASSERT_TRUE(enemy.jump());
}

TEST(Decepticon, CheckNameSharpLen) {
    Decepticon enemy;
    enemy.setName("Enemy");
    enemy.setLengthOfBlade(20);
    enemy.setSharpnessOfBlade(300);
    EXPECT_EQ(enemy.getName(), "Enemy");
    EXPECT_EQ(enemy.getSharpnessOfBlade(), 300);
    EXPECT_EQ(enemy.getLengthOfBlade(), 20);
}

TEST(Minicon, CheckWork) {
    Instrument pickaxe(100, 50);

    Minicon builder("Barak", &pickaxe);
    builder.setSize(100);
    builder.setEnergy(1000);
    ASSERT_TRUE(builder.work());
}

TEST(Minicon, CheckNameEnergy) {
    Instrument pickaxe(100, 50);

    Minicon builder("Barak", &pickaxe);
    builder.setSize(100);
    builder.setEnergy(1000);
    EXPECT_EQ(builder.getName(), "Barak");
    EXPECT_EQ(builder.getEnergy(), 1000);
}

TEST(Instrument, CheckUse) {
    Instrument axe(200, 20);
    ASSERT_TRUE(axe.use());
}

TEST(Transformer, CheckOutput) {
    Transformer hero;
    hero.fire();
    hero.jump();
    hero.setFuel(70);

    std::ostringstream strs;
    strs << hero;
    std::string s = strs.str();

    EXPECT_EQ(s, "Untitled 0 0 70 0");
}


TEST(Autobot, CheckOutput) {
    Autobot hero2("Optimus");
    hero2.setPowerOfBlaster(100);
    hero2.setColor("purple");
    hero2.fire();

    std::ostringstream strs;
    strs << hero2;
    std::string s = strs.str();

    EXPECT_EQ(s, "Optimus 100 0 purple");
}

TEST(Decepticon, CheckOutput) {
    Decepticon enemy;
    enemy.setName("Enemy");
    enemy.fire();
    enemy.jump();
    enemy.setLengthOfBlade(20);
    enemy.setSharpnessOfBlade(300);

    std::ostringstream strs;
    strs << enemy;
    std::string s = strs.str();

    EXPECT_EQ(s, "Enemy 300 20");
}

TEST(Minicon, CheckOutput) {
    Instrument pickaxe(100, 50);

    Minicon builder("Barak", &pickaxe);
    builder.setSize(100);
    builder.setEnergy(1000);
    builder.work();
    builder.work();

    std::ostringstream strs;
    strs << builder;
    std::string s = strs.str();

    EXPECT_EQ(s, "Barak 1000 100");
}

TEST(Transformer, CheckComparison) {
    Transformer trans1("cplusplus");
    trans1.setStrength(1000);
    Transformer trans2("python");
    trans2.setStrength(5000);

    ASSERT_TRUE(trans1 < trans2);
}

TEST(Autobot, CheckComparison) {
    Autobot atbot1;
    atbot1.setPowerOfBlaster(100);
    Autobot atbot2;
    atbot2.setPowerOfBlaster(200);

    ASSERT_FALSE(atbot1 > atbot2);
}

TEST(Decepticon, CheckComparison) {
    Decepticon dec1;
    dec1.setSharpnessOfBlade(2);
    dec1.setLengthOfBlade(5);
    Decepticon dec2;
    dec2.setSharpnessOfBlade(3);
    dec2.setLengthOfBlade(3);

    ASSERT_TRUE(dec1 > dec2);
}

TEST(Minicon, CheckComparison) {
    Instrument pickaxe2(100, 50);
    Minicon minc1("Barak1", &pickaxe2);
    minc1.setEnergy(50);
    minc1.setSize(2);
    Minicon minc2("Barak2", &pickaxe2);
    minc2.setEnergy(33);
    minc2.setSize(3);

    ASSERT_FALSE(minc2 > minc1);
}