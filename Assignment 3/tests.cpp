#include "gtest/gtest.h"
#include "transformer.h"
#include "gun_type.h"
#include "voice.h"
#include "sniper.h"
#include "shooter.h"
#include "bazookron.h"
#include "medic.h"

// Define a test case named 'Gun_type' with a test named 'check_gun_type_class'
TEST(Gun_type, check_gun_type_class)
{
    Gun gun("AKM", 30, 30);    // Create a Gun object named "AKM" with 30 ammo and 30 damage
    EXPECT_EQ(gun.get_gun_type(), "AKM");    // Test (expect) that the gun's type is correctly returned as "AKM"
    EXPECT_EQ(gun.get_ammo(), 30);    // Test that the ammo count is correctly returned as 30
    EXPECT_EQ(gun.get_damage(), 30);   // Test that the damage value is correctly returned as 30 
    gun.set_gun_type("AWP"); // Use setter methods to change the gun's properties   
    gun.set_damage(50);
    gun.set_ammo(45);
    EXPECT_EQ(gun.get_gun_type(), "AWP");    // Test that the new values were set correctly
    EXPECT_EQ(gun.get_damage(), 50);
    EXPECT_EQ(gun.get_ammo(), 45);
}

// Test case for the base Transformer class parameters (getters/setters)
TEST(Transformer, check_transformer_parameters)
{
    Gun gun("AKM", 30, 90);  // Create a Gun object for the Transformer to use  

    Transformer transformer("Transformer", "Divine", 200, gun.get_gun_type(), gun.get_damage(), gun.get_ammo(), 100);  // Create a Transformer object, initializing it with various parameters including the gun's stats  

    // Test that all the Transformer's properties were set correctly upon creation
    EXPECT_EQ(transformer.get_name(), "Transformer");
    EXPECT_EQ(transformer.get_fraction(), "Divine");
    EXPECT_EQ(transformer.get_health(), 200);
    EXPECT_EQ(transformer.get_gun_type(), gun.get_gun_type());
    EXPECT_EQ(transformer.get_damage(), gun.get_damage());
    EXPECT_EQ(transformer.get_ammo(), gun.get_ammo());
    EXPECT_EQ(transformer.move_speed(), 100);

    gun.set_gun_type("AWP");  // Change the properties of the gun  
    gun.set_damage(70);
    gun.set_ammo(30);

    transformer.set_name("Prime");   // Use setter methods to change the Transformer's properties to match the new gun stats and other values 
    transformer.set_fraction("Autobot");
    transformer.set_health(100);
    transformer.set_gun_type(gun.get_gun_type());
    transformer.set_damage(gun.get_damage());
    transformer.set_ammo(gun.get_ammo());
    transformer.set_move_speed(130);

    EXPECT_EQ(transformer.get_name(), "Prime");    // Test that all the Transformer's new properties were set correctly
    EXPECT_EQ(transformer.get_fraction(), "Autobot");
    EXPECT_EQ(transformer.get_health(), 100);
    EXPECT_EQ(transformer.get_gun_type(), gun.get_gun_type());
    EXPECT_EQ(transformer.get_damage(), gun.get_damage());
    EXPECT_EQ(transformer.get_ammo(), gun.get_ammo());
    EXPECT_EQ(transformer.move_speed(), 130);
}

// Test case for the base Transformer class methods/actions
TEST(Transformer, check_transformer_methods)
{
    Gun gun("AKM", 30, 90);  // Create a Gun and a Transformer object  

    Transformer transformer("Transformer", "Divine", 200, gun.get_gun_type(), gun.get_damage(), gun.get_ammo(), 100);

    EXPECT_TRUE(transformer.transform()); // Test (expect) that various action methods of the Transformer return true, indicating success   
    EXPECT_TRUE(transformer.attack());
    EXPECT_TRUE(transformer.move());
    EXPECT_TRUE(transformer.jump());
    EXPECT_TRUE(transformer.ultimate());
    EXPECT_TRUE(transformer.phrase());
}

// Test case for a more complex constructor of Transformer that includes a Voice object
TEST(Transformer, check_constructor_overloading)
{
    Voice voice("English"); // Create a Voice object set to "English"   
    Gun gun("AKM", 30, 90);
    Transformer transformer("Transformer", "Divine", 200, gun.get_gun_type(), gun.get_damage(), gun.get_ammo(), 100,
                            voice);  // Create a Transformer using a constructor that also takes a Voice object  
    EXPECT_EQ(transformer.get_voice()->get_voice(), voice.get_voice());    // Test that the Transformer's voice was correctly initialized
    voice.set_voice("Russian");    // Change the original voice object's language
    transformer.get_voice()->set_voice(voice.get_voice());  // Use the Transformer's getter to get its voice object and change its language  
    EXPECT_EQ(transformer.get_voice()->get_voice(), voice.get_voice());   // Test that the change was successful 
}

TEST(Shooter, test_class_shooter)
{
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

TEST(Sniper, test_class_sniper)
{
    AWP awp("AWP", 70, 30);
    Sniper sniper("Sniper", "Decepticon", 120, awp.get_gun_type(), awp.get_damage(), awp.get_ammo(), 70);

    EXPECT_EQ(sniper.get_mind_control(), 70);
    EXPECT_EQ(sniper.get_points_to_ulta(), 0);

    sniper.set_mind_control(100);
    sniper.set_points_to_ulta(100);

    EXPECT_EQ(sniper.get_mind_control(), 100);
    EXPECT_EQ(sniper.get_points_to_ulta(), 100);

    EXPECT_TRUE(sniper.hide());
    EXPECT_TRUE(sniper.ultimate());
}

TEST(Bazookron, test_class_bazookron)
{
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

TEST(Medic, test_class_medic)
{
    Arm arm("Arm", 60, 1 << 31);
    Medic medic("Doctor", "Autobot", 300, arm.get_gun_type(), arm.get_damage(), arm.get_ammo(), 200);

    EXPECT_EQ(medic.get_medicines(), 100);
    EXPECT_EQ(medic.get_points_to_ulta(), 0);

    medic.set_medicines(10);
    medic.set_points_to_ulta(100);

    EXPECT_EQ(medic.get_medicines(), 10);
    EXPECT_EQ(medic.get_points_to_ulta(), 100);
}
