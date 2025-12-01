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

TEST(TransformerTest, ConstructorAndBasicGetters) {
    Battlefield field(500, 500);
    Autobot autobot(&field, 5, 20, 200, 150, 70, 15);

    EXPECT_EQ(autobot.getLevel(), 5);
    EXPECT_EQ(autobot.getStrength(), 20);
    EXPECT_EQ(autobot.getAmmo(), 200);
    EXPECT_EQ(autobot.getHealth(), 150);
    EXPECT_EQ(autobot.getCourage(), 70);
    EXPECT_EQ(autobot.getTeamBonus(), 15);
    EXPECT_EQ(autobot.getBattlefieldLength(), 500);
    EXPECT_EQ(autobot.getBattlefieldWidth(), 500);
}


TEST(TransformerTest, CompositionAndAssociationWork) {
    Battlefield field(800, 600);
    Decepticon decepticon(&field, 1, 10, 100, 100, 50, 30);

    EXPECT_EQ(decepticon.getLevel(), 1);
    EXPECT_EQ(decepticon.getGunRange(), 500);   
    EXPECT_EQ(decepticon.getGunDamage(), 10);
    EXPECT_EQ(decepticon.getBattlefieldLength(), 800);
    EXPECT_EQ(decepticon.getBattlefieldWidth(), 600);

    decepticon.setGunRange(25);
    decepticon.setGunDamage(800);
    decepticon.setBattlefieldLength(1000);
    decepticon.setBattlefieldWidth(1000);

    EXPECT_EQ(decepticon.getGunRange(), 25);
    EXPECT_EQ(decepticon.getGunDamage(), 800);
    EXPECT_EQ(decepticon.getBattlefieldLength(), 1000);
    EXPECT_EQ(decepticon.getBattlefieldWidth(), 1000);
}

TEST(TransformerTest, CoreMethodsReturnTrue) {
    Battlefield field(100, 100);
    Autobot autobot(&field, 1, 10, 100, 100, 50, 10);

    EXPECT_TRUE(autobot.move());
    EXPECT_TRUE(autobot.fire());
    EXPECT_TRUE(autobot.jump());
}


TEST(TransformerTest, VirtualMethodsPrintCorrectly) {
    Battlefield field(100, 100);
    Autobot autobot(&field, 1, 10, 100, 100, 50, 10);
    Decepticon decepticon(&field, 1, 10, 100, 100, 50, 30);

    autobot.specialAbility();
    autobot.transform();     

    decepticon.specialAbility();
    decepticon.transform();      
}


TEST(TransformerTest, OutputStreamOperatorWorks) {
    Battlefield field(200, 300);
    Autobot autobot(&field, 2, 15, 120, 90, 60, 8);

    std::ostringstream oss;
    oss << autobot;
    std::string output = oss.str();

    EXPECT_NE(output.find("Autobot:"), std::string::npos);
    EXPECT_NE(output.find("Level: 2"), std::string::npos);
    EXPECT_NE(output.find("Courage: 60"), std::string::npos);
    EXPECT_NE(output.find("Battlefield: 200 x 300"), std::string::npos);
}


TEST(AutobotTest, AutobotSpecificMethods) {
    Battlefield field(100, 100);
    Autobot autobot(&field, 1, 10, 100, 100, 50, 10);

    EXPECT_TRUE(autobot.inspireTeam());

    autobot.setCourage(100);
    autobot.setTeamBonus(25);
    EXPECT_EQ(autobot.getCourage(), 100);
    EXPECT_EQ(autobot.getTeamBonus(), 25);
}

TEST(DecepticonTest, DecepticonSpecificMethods) {
    Battlefield field(100, 100);
    Decepticon decepticon(&field, 1, 10, 100, 100, 50, 30);

    EXPECT_TRUE(decepticon.executeEvilPlan());

    decepticon.setCunning(90);
    decepticon.setStealthLevel(50);
    EXPECT_EQ(decepticon.getCunning(), 90);
    EXPECT_EQ(decepticon.getStealthLevel(), 50);
}


TEST(MaximalTest, MaximalSpecificMethods) {
    Battlefield field(100, 100);
    Maximal maximal(&field, 1, 10, 100, 100, 60, 15);

  
    EXPECT_EQ(maximal.getLevel(), 1);
    maximal.specialAbility(); 
}


TEST(PolymorphismTest, VirtualMethodsViaBasePointer) {
    Battlefield field(100, 100);
    Autobot autobot(&field, 1, 10, 100, 100, 50, 10);
    Decepticon decepticon(&field, 1, 10, 100, 100, 50, 30);

    Transformer* t1 = &autobot;
    Transformer* t2 = &decepticon;


    t1->specialAbility();   
    t1->transform();       

    t2->specialAbility();   
    t2->transform();        
}

TEST(ConstructorTest, DefaultConstructorsWork) {
    Autobot a1;
    Decepticon d1;
    Maximal m1;

    
    EXPECT_GE(a1.getLevel(), 1);
    EXPECT_GE(d1.getLevel(), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    Battlefield field(1000, 1000);
    Gun gun(100, 1488);
    Autobot autobot(&field, 3, 15, 150, 120, 75, 25);
    Decepticon decepticon(&field, 6, 25, 220, 180, 90, 40);
    Maximal maximal(&field, 4, 18, 180, 130, 85, 95);
    std::cout << gun  << std::endl;
    std::cout << field << std::endl;
    std::cout << autobot << std::endl;
    std::cout << decepticon << std::endl;
    std::cout << maximal << std::endl;
    return RUN_ALL_TESTS();

}
