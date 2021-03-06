#include <gtest/gtest.h>
#include "conta_linha.c"

/*Conjunto dos testes*/

TEST(contador, teste) {
    ASSERT_EQ(21, contador("conta_linha.c"));
    ASSERT_EQ(-1, contador("conta"));
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
