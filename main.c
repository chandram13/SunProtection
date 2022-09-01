#include <stdio.h>
// Marvish Chandra

public static void sunscreenLevels(SPF){
    if SPF < 15:
        printf("The individual does not need required sunscreen if the range outside is this low.")
    if SPF > 15:
        printf("The individual can apply light sunscreen at this level if they won't be in the sun for very long.")
    if SPF >= 30:
        printf("This is the bare minimum level sunscreen that you will need for long sun exposure.")
    if SPF >= 50:
        printf("This is the normal level of sunscreen when you're in hot temperatures.")
    if 100 > SPF > 60:
        printf("Buy these levels of sunscreen when you're in a very heated climate and cannot find shade or shelter.")
    return 0;
}

