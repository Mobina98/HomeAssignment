/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#include <gtest/gtest.h>

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