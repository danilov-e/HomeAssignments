/*
 * Egor Danilov
 * st141853@student.spbu.ru
 * My home assignment 3
 */


#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Maximal.h"
#include "Decepticon.h"

TEST(GunTest, ConstructorAndGetters) {
    Gun gun(150, 75);
    EXPECT_EQ(gun.getDamage(), 150);
    EXPECT_EQ(gun.getRange(), 75);
}

TEST(GunTest, SettersWork) {
    Gun gun;
    gun.setDamage(200);
    gun.setRange(100);
    EXPECT_EQ(gun.getDamage(), 200);
    EXPECT_EQ(gun.getRange(), 100);
}

TEST(BattlefieldTest, ConstructorAndGetters) {
    Battlefield field(2000, 1500);
    EXPECT_EQ(field.getLength(), 2000);
    EXPECT_EQ(field.getWidth(), 1500);
}

TEST(BattlefieldTest, SettersWork) {
    Battlefield field;
    field.setLength(3000);
    field.setWidth(2000);
    EXPECT_EQ(field.getLength(), 3000);
    EXPECT_EQ(field.getWidth(), 2000);
}

TEST(TransformerTest, ConstructorAndBasicGetters) {
    Battlefield field(1000, 1000);
    Transformer transformer(&field, 5, 20, 200, 150);
    
    EXPECT_EQ(transformer.getLevel(), 5);
    EXPECT_EQ(transformer.getStrength(), 20);
    EXPECT_EQ(transformer.getAmmo(), 200);
    EXPECT_EQ(transformer.getHealth(), 150);
}

TEST(TransformerTest, CompositionWorks) {
    Battlefield field(1000, 1000);
    Transformer transformer(&field);
    
    EXPECT_GT(transformer.getGunDamage(), 0);
    EXPECT_GT(transformer.getGunRange(), 0);
    
    transformer.setGunDamage(300);
    transformer.setGunRange(150);
    EXPECT_EQ(transformer.getGunDamage(), 300);
    EXPECT_EQ(transformer.getGunRange(), 150);
}

TEST(TransformerTest, AssociationWorks) {
    Battlefield field(800, 600);
    Transformer transformer(&field);
    
    EXPECT_EQ(transformer.getBattlefieldLength(), 800);
    EXPECT_EQ(transformer.getBattlefieldWidth(), 600);
    
    transformer.setBattlefieldLength(1200);
    transformer.setBattlefieldWidth(900);
    EXPECT_EQ(transformer.getBattlefieldLength(), 1200);
    EXPECT_EQ(transformer.getBattlefieldWidth(), 900);
}

TEST(TransformerTest, MethodsReturnTrue) {
    Battlefield field(1000, 1000);
    Transformer transformer(&field);
    
    EXPECT_TRUE(transformer.move());
    EXPECT_TRUE(transformer.fire());
    EXPECT_TRUE(transformer.jump());
}

TEST(AutobotTest, ConstructorAndInheritedFields) {
    Battlefield field(1000, 1000);
    Autobot autobot(&field, 3, 15, 150, 120, 75, 25);
    
    EXPECT_EQ(autobot.getLevel(), 3);
    EXPECT_EQ(autobot.getCourage(), 75);
    EXPECT_EQ(autobot.getTeamBonus(), 25);
}

TEST(AutobotTest, AutobotSpecificMethods) {
    Battlefield field(1000, 1000);
    Autobot autobot(&field);
    
    EXPECT_TRUE(autobot.inspireTeam());
    EXPECT_TRUE(autobot.move());
}

TEST(MaximalTest, ConstructorAndSpecificFields) {
    Battlefield field(1000, 1000);
    Maximal maximal(&field, 4, 18, 180, 130, 85, 95);
    
    EXPECT_EQ(maximal.getTechAffinity(), 85);
    EXPECT_EQ(maximal.getTransformationSpeed(), 95);
    EXPECT_EQ(maximal.getLevel(), 4);
}

TEST(MaximalTest, MaximalSpecificMethods) {
    Battlefield field(1000, 1000);
    Maximal maximal(&field);
    
    EXPECT_TRUE(maximal.transformToBeastMode());
    EXPECT_TRUE(maximal.fire()); 
}
TEST(DecepticonTest, ConstructorAndSpecificFields) {
    Battlefield field(1000, 1000);
    Decepticon decepticon(&field, 6, 25, 220, 180, 90, 40);
    
    EXPECT_EQ(decepticon.getCunning(), 90);
    EXPECT_EQ(decepticon.getStealthLevel(), 40);
    EXPECT_EQ(decepticon.getStrength(), 25);
}

TEST(DecepticonTest, DecepticonSpecificMethods) {
    Battlefield field(1000, 1000);
    Decepticon decepticon(&field);
    
    EXPECT_TRUE(decepticon.executeEvilPlan());
    EXPECT_TRUE(decepticon.jump());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    Battlefield field(1000, 1000);
    Transformer transformer(&field, 5, 20, 200, 150);
    Gun gun(100, 1488);
    Autobot autobot(&field, 3, 15, 150, 120, 75, 25);
    Decepticon decepticon(&field, 6, 25, 220, 180, 90, 40);
    Maximal maximal(&field, 4, 18, 180, 130, 85, 95);
    std::cout << transformer << std::endl;
    std::cout << gun  << std::endl;
    std::cout << field << std::endl;
    std::cout << autobot << std::endl;
    std::cout << decepticon << std::endl;
    std::cout << maximal << std::endl;
    return RUN_ALL_TESTS();

}
