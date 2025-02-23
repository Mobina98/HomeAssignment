#include <gtest/gtest.h>
#include "transformer.hpp"
#include "autobot.hpp"
#include "decepticon.hpp"
#include "minicon.hpp"
#include "weapon.h"



TEST(WeaponTest, TestSetName) {
    Weapon weapon("Blaster");
    weapon.setName("Laser");
    EXPECT_EQ(weapon.getName(), "Laser");
}

TEST(WeaponTest, TestGetName) {
    Weapon weapon("Blaster");
    EXPECT_EQ(weapon.getName(), "Blaster");
}


TEST(TransformerTest, ConstructorAndGetters) {
    Weapon weapon("Blaster");
    Transformer transformer("Optimus", 10, weapon, 100, 50, 20);

    EXPECT_EQ(transformer.getName(), "Optimus");
    EXPECT_EQ(*transformer.getLevel(), 10);
    EXPECT_EQ(transformer.getStrength(), 100);
    EXPECT_EQ(transformer.getFuel(), 50);
    EXPECT_EQ(transformer.getAmmo(), 20);
    EXPECT_EQ(transformer.get_weapon().getName(), "Blaster");
}

TEST(TransformerTest, Setters) {
    Weapon weapon("Blaster");
    Transformer transformer("Optimus", 10, weapon, 100, 50, 20);

    transformer.setName("Bumblebee");
    transformer.setLevel(15);
    transformer.setStrength(200);
    transformer.setFuel(100);
    transformer.setAmmo(40);
    transformer.set_weapon(Weapon("Cannon"));

    EXPECT_EQ(transformer.getName(), "Bumblebee");
    EXPECT_EQ(*transformer.getLevel(), 15);
    EXPECT_EQ(transformer.getStrength(), 200);
    EXPECT_EQ(transformer.getFuel(), 100);
    EXPECT_EQ(transformer.getAmmo(), 40);
    EXPECT_EQ(transformer.get_weapon().getName(), "Cannon");
}

TEST(TransformerTest, Methods) {
    Weapon weapon("Blaster");
    Transformer transformer("Optimus", 10, weapon, 100, 50, 20);

    EXPECT_TRUE(transformer.fire());
    EXPECT_TRUE(transformer.move());
    EXPECT_TRUE(transformer.jump());
}

// Test for class Autobot
TEST(AutobotTest, ConstructorAndMethods) {
    Weapon weapon("Blaster");
    Autobot autobot("Bumblebee", 5, weapon, 80, 40, 10);

    autobot.setColor("Yellow");
    autobot.set_power_of_blaster(120);

    EXPECT_EQ(autobot.getColor(), "Yellow");
    EXPECT_EQ(autobot.get_power_of_blaster(), 120);
    EXPECT_TRUE(autobot.phrase("Hello, world!"));
    EXPECT_TRUE(autobot.check());
}


TEST(DecepticonTest, ConstructorAndMethods) {
    Weapon weapon("Sword");
    Decepticon decepticon("Megatron", 7, weapon, 150, 60, 30);

    decepticon.setSharpnessOfBlade(5);
    decepticon.setLengthOfBlade(10);

    EXPECT_EQ(decepticon.getSharpnessOfBlade(), 5);
    EXPECT_EQ(decepticon.getLengthOfBlade(), 10);
    EXPECT_TRUE(decepticon.agress());
}


TEST(MiniconTest, ConstructorAndMethods) {
    Weapon weapon("Drill");
    Minicon minicon("Fixit", 3, weapon, 50, 20, 15);

    minicon.setEnergy(3);
    minicon.setSize(2);

    EXPECT_EQ(minicon.getEnergy(), 3);
    EXPECT_EQ(minicon.getSize(), 2);
    EXPECT_TRUE(minicon.work());
}
