#include "gtest/gtest.h"
#include "transformer.h"
#include "gun_type.h"
#include "voice.h"
#include "sniper.h"
#include "shooter.h"
#include "bazookron.h"
#include "medic.h"
#include <vector>

TEST(Gun_type, check_gun_type_class) {
    Gun gun("AKM", 30, 30);
    EXPECT_EQ(gun.get_gun_type(), "AKM");
    EXPECT_EQ(gun.get_ammo(), 30);
    EXPECT_EQ(gun.get_damage(), 30);
    gun.set_gun_type("AWP");
    gun.set_damage(50);
    gun.set_ammo(45);
    EXPECT_EQ(gun.get_gun_type(), "AWP");
    EXPECT_EQ(gun.get_damage(), 50);
    EXPECT_EQ(gun.get_ammo(), 45);
}

TEST(Transformer, check_transformer_parameters) {
    Gun gun("AKM", 30, 90);

    Transformer transformer("Transformer", "Divine", 200, gun.get_gun_type(), gun.get_damage(), gun.get_ammo(), 100);

    EXPECT_EQ(transformer.get_name(), "Transformer");
    EXPECT_EQ(transformer.get_fraction(), "Divine");
    EXPECT_EQ(transformer.get_health(), 200);
    EXPECT_EQ(transformer.get_gun_type(), gun.get_gun_type());
    EXPECT_EQ(transformer.get_damage(), gun.get_damage());
    EXPECT_EQ(transformer.get_ammo(), gun.get_ammo());
    EXPECT_EQ(transformer.move_speed(), 100);

    gun.set_gun_type("AWP");
    gun.set_damage(70);
    gun.set_ammo(30);

    transformer.set_name("Prime");
    transformer.set_fraction("Autobot");
    transformer.set_health(100);
    transformer.set_gun_type(gun.get_gun_type());
    transformer.set_damage(gun.get_damage());
    transformer.set_ammo(gun.get_ammo());
    transformer.set_move_speed(130);

    EXPECT_EQ(transformer.get_name(), "Prime");
    EXPECT_EQ(transformer.get_fraction(), "Autobot");
    EXPECT_EQ(transformer.get_health(), 100);
    EXPECT_EQ(transformer.get_gun_type(), gun.get_gun_type());
    EXPECT_EQ(transformer.get_damage(), gun.get_damage());
    EXPECT_EQ(transformer.get_ammo(), gun.get_ammo());
    EXPECT_EQ(transformer.move_speed(), 130);
}

TEST(Transformer, check_transformer_methods) {
    Gun gun("AKM", 30, 90);

    Transformer transformer("Transformer", "Divine", 200, gun.get_gun_type(), gun.get_damage(), gun.get_ammo(), 100);

    EXPECT_TRUE(transformer.transform());
    EXPECT_TRUE(transformer.attack());
    EXPECT_TRUE(transformer.move());
    EXPECT_TRUE(transformer.jump());
    EXPECT_TRUE(transformer.ultimate());
    EXPECT_TRUE(transformer.phrase());
}

TEST(Transformer, check_constructor_overloading) {
    Voice voice("English");
    Gun gun("AKM", 30, 90);
    Transformer transformer("Transformer", "Divine", 200, gun.get_gun_type(), gun.get_damage(), gun.get_ammo(), 100,
                            voice);
    EXPECT_EQ(transformer.get_voice()->get_voice(), "English");
    voice.set_voice("Russian");
    transformer.get_voice()->set_voice(voice.get_voice());
    EXPECT_EQ(transformer.get_voice()->get_voice(), voice.get_voice());
}

TEST(Transformer, check_operators) {
    Gun gun("AKM", 30, 90);
    Gun awp("AWP", 70, 30);
    Transformer transformer("Transformer", "Divine", 200, gun.get_gun_type(), gun.get_damage(), gun.get_ammo(), 100);
    Sniper sniper("Sniper", "Autobot", 80, awp.get_gun_type(), awp.get_damage(), awp.get_ammo(), 70);

    EXPECT_TRUE(transformer > sniper);
    EXPECT_FALSE(transformer < sniper);
    EXPECT_FALSE(transformer == sniper);
    EXPECT_TRUE(transformer != sniper);
    EXPECT_TRUE(transformer >= sniper);
    EXPECT_FALSE(transformer <=sniper);

    transformer.set_health(50);

    EXPECT_FALSE(transformer > sniper);
    EXPECT_TRUE(transformer < sniper);
    EXPECT_FALSE(transformer >= sniper);
    EXPECT_TRUE(transformer <= sniper);

    sniper.set_health(100);
    transformer.set_health(100);

    EXPECT_FALSE(transformer > sniper);
    EXPECT_FALSE(transformer < sniper);
    EXPECT_TRUE(transformer >= sniper);
    EXPECT_TRUE(transformer <= sniper);
    EXPECT_TRUE(transformer == sniper);
    EXPECT_FALSE(transformer != sniper);
}

TEST(Shooter, test_class_shooter) {
    AKM akm("AKM", 30, 90);
    Shooter shooter("Shooter", "Autobot", 100, akm.get_gun_type(), akm.get_damage(), akm.get_ammo(), 100);

    EXPECT_EQ(shooter.get_rage(), 0);
    EXPECT_EQ(shooter.get_points_to_ulta(), 0);

    shooter.set_rage(100);
    shooter.set_points_to_ulta(100);

    EXPECT_EQ(shooter.get_rage(), 100);
    EXPECT_EQ(shooter.get_points_to_ulta(), 100);

    EXPECT_TRUE(shooter.defend());
    EXPECT_TRUE(shooter.ultimate());
}

TEST(Sniper, test_class_sniper) {
    AWP awp("AWP", 70, 30);
    Sniper sniper("Sniper", "Decepticon", 120, awp.get_gun_type(), awp.get_damage(), awp.get_ammo(), 70);

    EXPECT_EQ(sniper.get_mind_control(), 70);
    EXPECT_EQ(sniper.get_points_to_ulta(), 0);

    sniper.set_mind_control(100);
    sniper.set_points_to_ulta(100);

    EXPECT_EQ(sniper.get_mind_control(), 100);
    EXPECT_EQ(sniper.get_points_to_ulta(), 100);

    EXPECT_TRUE(sniper.scope());
    EXPECT_TRUE(sniper.hide());
    EXPECT_TRUE(sniper.ultimate());
}

TEST(Bazookron, test_class_bazookron) {
    Bazooka bazooka("Bazooka", 100, 5);
    Bazookron bazookron("Bazookron", "Decepticon", 200, bazooka.get_gun_type(), bazooka.get_damage(),
                        bazooka.get_ammo(), 50);

    EXPECT_EQ(bazookron.get_stabilization(), 100);
    EXPECT_EQ(bazookron.get_points_to_ulta(), 0);

    bazookron.set_stablization(50);
    bazookron.set_points_to_ulta(100);

    EXPECT_EQ(bazookron.get_stabilization(), 50);
    EXPECT_EQ(bazookron.get_points_to_ulta(), 100);

    EXPECT_TRUE(bazookron.guide_gun());
    EXPECT_TRUE(bazookron.ultimate());
}

TEST(Medic, test_class_medic) {
    Arm arm("Arm", 60, 1 << 31);
    Medic medic("Doctor", "Autobot", 300, arm.get_gun_type(), arm.get_damage(), arm.get_ammo(), 200);

    EXPECT_EQ(medic.get_medicines(), 100);
    EXPECT_EQ(medic.get_points_to_ulta(), 0);

    medic.set_medicines(10);
    medic.set_points_to_ulta(100);

    EXPECT_EQ(medic.get_medicines(), 10);
    EXPECT_EQ(medic.get_points_to_ulta(), 100);
}

TEST(Transformer, test_parent_type_pointer) {
    Transformer *transformer;

    AKM akm("AKM", 30, 90);
    Shooter shooter("Shooter", "Autobot", 100, akm.get_gun_type(), akm.get_damage(), akm.get_ammo(), 100);

    transformer = &shooter;

    EXPECT_TRUE(transformer->ultimate());
    EXPECT_TRUE(transformer->attack());
    EXPECT_EQ(transformer->get_class_name(), shooter.get_class_name());

    AWP awp("AWP", 70, 30);
    Sniper sniper("Sniper", "Decepticon", 120, awp.get_gun_type(), awp.get_damage(), awp.get_ammo(), 70);

    transformer = &sniper;

    EXPECT_TRUE(transformer->ultimate());
    EXPECT_TRUE(transformer->attack());
    EXPECT_EQ(transformer->get_class_name(), sniper.get_class_name());

    Arm arm("Arm", 60, 1 << 31);
    Medic medic("Doctor", "Autobot", 300, arm.get_gun_type(), arm.get_damage(), arm.get_ammo(), 200);

    transformer = &medic;

    EXPECT_TRUE(transformer->ultimate());
    EXPECT_TRUE(transformer->attack());
    EXPECT_EQ(transformer->get_class_name(), medic.get_class_name());

    Bazooka bazooka("Bazooka", 100, 5);
    Bazookron bazookron("Bazookron", "Decepticon", 120, bazooka.get_gun_type(), bazooka.get_damage(),
                        bazooka.get_ammo(), 300);

    transformer = &bazookron;

    EXPECT_TRUE(transformer->ultimate());
    EXPECT_TRUE(transformer->attack());
    EXPECT_EQ(transformer->get_class_name(), bazookron.get_class_name());
}

TEST(Transformer, check_vector_of_pointers) {
    std::vector<Transformer *> pull;
    AKM akm("AKM", 30, 90);
    AWP awp("AWP", 70, 30);
    Bazooka bazooka("Bazooka", 100, 5);
    Arm arm("Arm", 60, 1 << 31);


    Shooter avtomat("Avtomat", "Autobot", 100, akm.get_gun_type(), akm.get_damage(), akm.get_ammo(), 110);
    Shooter pulemet("Pulemet", "Decepticon", 120, akm.get_gun_type(), akm.get_damage(), akm.get_ammo(), 130);

    Sniper sniper("Sniper", "Autobot", 120, awp.get_gun_type(), awp.get_damage(), awp.get_ammo(), 70);
    Sniper city_sniper("Mark_Sniper", "Decepticon", 140, awp.get_gun_type(), awp.get_damage(), awp.get_ammo(), 80);

    Bazookron bazookron("Bazookron", "Autobot", 150, bazooka.get_gun_type(), bazooka.get_damage(), bazooka.get_ammo(),
                        150);
    Bazookron bazookman("Bazookman", "Decepticon", 140, bazooka.get_gun_type(), bazooka.get_damage(),
                        bazooka.get_ammo(), 160);

    Medic doctor("Doctor", "Autobot", 200, arm.get_gun_type(), arm.get_damage(), arm.get_ammo(), 150);
    Medic medic("Medic", "Decepticon", 250, arm.get_gun_type(), arm.get_damage(), arm.get_ammo(), 150);
    Medic assistant("Assistant", "Divine", 300, arm.get_gun_type(), arm.get_damage() * 2, arm.get_ammo(), 300);

    pull.push_back(&avtomat);
    pull.push_back(&pulemet);
    pull.push_back(&sniper);
    pull.push_back(&city_sniper);
    pull.push_back(&bazookron);
    pull.push_back(&bazookman);
    pull.push_back(&doctor);
    pull.push_back(&medic);
    pull.push_back(&assistant);

    for (const auto &pull: pull) {
        EXPECT_TRUE(pull->attack());
        EXPECT_TRUE(pull->ultimate());
        EXPECT_EQ(pull->get_class_name(), pull->get_class_name());
    }
}