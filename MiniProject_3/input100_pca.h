#include "my_header.h"
//0-9 samples
/*
my_num input1[10][784] = {
{-21,47,-3,-20,-31,15,25,30,-25,-12,12,-7,2,-14,-9,-5,18,16,5,4,-3,15,3,-5,-8,-3,9,-2,1,-13,5,-19,5,-10,-2,11,-6,-7,2,5,-18,5,7,-3,-11,-2,6,-4,0,-7,0,-10,-2,-6,-7,0,-3,4,0,9,-3,-7,-3,-3,3,-3,-4,1,8,2,-2,7,-2,5,-7,8,2,6,6,5,-2,3,-4,-2,-6,0,0,-5,2,-3,-1,2,6,-2,-1,-3,-2,-4,-2,-8},
{1,-60,-10,25,-3,-30,18,15,9,-5,12,2,0,-52,-1,28,36,0,2,-6,26,18,4,16,-9,-18,3,0,2,-4,5,8,-2,4,6,-3,-2,6,1,-4,2,-14,-13,8,0,-17,-16,7,8,19,3,-15,-6,-8,3,6,-1,-10,4,9,-2,-5,1,-9,1,12,10,-2,-3,-1,-2,6,9,2,0,11,0,1,0,-1,-1,0,-2,3,5,-10,-3,-4,8,6,8,-1,0,-2,0,-6,6,3,-4,6},
{-59,-27,4,16,-34,6,-2,-7,6,-9,-4,-5,-11,19,-19,3,1,-2,-4,-2,1,4,2,4,0,1,13,-1,1,-13,-5,-4,6,-3,-6,-8,7,-3,-1,-4,-1,-1,5,-5,2,-3,7,-1,8,-3,-5,2,5,0,3,-4,-4,-4,-2,-1,-5,1,-2,-4,-7,-1,2,3,3,-5,5,-4,2,-2,-1,-4,0,5,-1,-3,-1,-3,3,1,1,-2,-3,2,-3,4,2,-6,6,-3,2,0,3,-1,2,-2},
{77,7,16,-6,-13,-30,44,5,1,-3,-33,-15,-5,-7,-24,-3,-9,13,-11,-22,4,10,7,4,0,19,-11,11,-14,9,-10,-3,-4,-6,0,3,-13,-6,-1,-12,8,8,-1,-3,1,1,-2,-9,-8,6,5,6,-2,7,-3,3,-1,-10,3,9,-4,0,3,5,3,-5,4,3,2,5,5,1,-3,-1,3,6,6,0,5,1,8,0,5,1,1,-2,4,-2,1,2,5,-1,-3,-3,0,0,2,-1,4,6},
{12,45,-18,40,-9,14,-31,15,-21,12,9,-13,16,8,-17,20,-15,-10,-7,-3,3,7,-6,25,-19,-6,-12,1,6,-7,-10,-4,-2,7,-5,-3,-4,-2,-1,6,-7,-4,0,-9,-9,-9,0,1,9,-9,-5,0,-3,1,-4,-2,10,5,5,-4,-10,-4,1,6,-1,9,-4,6,2,0,-6,-3,0,-11,-1,5,-5,3,2,0,1,-3,-2,-5,0,-5,0,1,2,-3,-3,-11,-3,8,-6,-4,-4,-1,1,-1},
{-64,-30,5,4,-20,16,6,-8,22,-5,-6,-3,-18,18,-23,3,-7,0,-2,2,-3,-1,1,-2,-5,0,13,-3,1,-13,-7,2,4,-6,-4,-4,7,-3,-2,-2,0,3,3,0,6,-4,9,-1,7,-6,-4,-1,3,0,2,-3,0,-2,1,4,-4,1,-3,0,0,-4,0,3,1,-6,6,-3,-2,2,-2,0,-1,2,-1,0,-1,0,0,0,3,2,-1,1,4,2,1,-1,2,-2,2,-1,1,1,5,0},
{-16,35,-29,-3,-6,12,-11,10,-15,-27,19,42,18,-11,13,10,12,-13,-14,24,-1,-12,5,16,-14,11,8,10,0,11,9,5,-1,2,1,-12,-8,-2,9,0,-3,2,8,-9,-10,10,4,-6,11,-6,6,-2,10,-10,1,-7,0,-3,-9,2,11,-11,5,-3,2,2,10,-1,-2,-6,-11,-1,-4,-9,2,4,-4,-3,2,-4,8,-4,-7,2,1,0,3,0,0,5,-6,0,-1,2,2,-7,-6,-4,5,-3},
{-20,22,-24,14,6,-24,-19,-12,25,0,-7,-6,7,17,16,-15,-5,4,9,-11,2,41,-5,-4,3,-11,-3,8,-15,-5,7,-16,10,6,2,10,16,13,14,18,4,-2,-3,14,13,1,0,-3,-8,10,6,3,7,12,8,-3,2,-2,-13,12,0,-6,3,-12,-5,0,-1,8,11,-1,9,-1,-2,-3,0,5,1,-9,4,1,0,2,3,3,-3,-1,2,1,2,-4,-6,-1,5,3,6,3,2,3,-9,0},
{16,9,16,24,-3,0,-2,-16,-4,59,22,3,-22,16,-24,20,10,-18,24,20,-19,-13,-3,37,-10,-8,-2,12,17,-6,-5,20,-22,-10,8,-12,-1,1,5,-9,18,8,-7,-9,-6,5,-1,-5,2,8,7,5,7,6,-5,-2,-4,8,12,14,8,-6,6,-6,0,-5,-5,3,-4,-5,8,8,2,-6,4,-1,0,10,-7,-5,-1,3,0,-2,-5,4,-2,-7,-10,-10,1,-1,-1,7,-6,3,2,3,-1,-5},
{-2,53,34,-29,-1,18,15,-8,20,-44,9,7,-4,20,-9,13,12,0,-13,-20,8,-4,-2,-11,0,-6,-3,-12,-12,-10,12,7,-5,-2,9,3,-19,7,-11,5,-6,-13,2,-8,12,6,4,0,-5,2,2,10,-6,1,7,-2,-1,3,-10,-8,-12,-4,-4,0,5,0,1,-5,-1,-2,-9,7,-4,-2,0,1,-2,2,-3,2,-3,2,-6,1,4,0,-4,-4,-8,4,1,2,2,2,0,-3,1,3,6,-5},
};
*/
//10-19 samples
/*
my_num input1[10][784] = {
{71,-38,-30,8,-51,25,-14,-26,-29,-6,0,20,-2,0,-15,18,-11,-4,11,7,7,10,-9,4,-3,18,0,-17,2,-3,5,-7,6,8,8,3,-10,5,1,2,-10,-4,2,-4,-3,0,-17,-19,2,-9,5,11,-1,8,7,-7,4,-2,9,-3,-2,-1,2,3,3,-1,-4,2,5,4,-1,-1,-6,1,1,3,-20,2,-4,-1,1,2,2,-4,1,1,-1,-2,3,6,4,-4,-1,2,4,3,-3,2,-1,-5},
{21,-12,-12,38,-17,16,3,-10,15,-9,-23,45,21,-4,-21,-1,7,11,-2,-10,8,5,-12,20,-14,15,3,-5,-6,1,-15,-12,-16,13,2,-11,-2,27,-6,0,-12,4,-10,1,-3,-6,-12,-19,-3,-14,5,3,-16,-11,21,-8,2,3,-4,9,-8,-1,13,9,-7,14,-3,11,-3,4,2,1,2,-4,-1,-3,2,0,6,-6,-5,-2,-3,-4,0,3,-1,-7,-2,7,1,1,-2,8,8,-1,8,-8,-7,-4},
{-11,62,8,-19,12,-14,-11,-7,-7,11,-4,4,-11,-28,-2,-3,5,-4,7,-9,19,-7,15,-12,-3,-8,1,11,4,7,5,-19,5,7,-3,-3,11,2,10,9,0,9,2,-5,-3,2,-3,-5,1,3,-3,6,5,-11,1,-3,-10,-9,-10,0,7,2,-10,1,4,-3,2,-4,-3,1,1,-6,2,0,-2,2,-1,5,-2,-4,-3,-2,0,-3,3,2,1,3,-2,4,9,3,0,0,-4,-4,1,0,2,-4},
{66,2,-19,3,-26,11,-11,-39,1,-11,-19,-36,-22,-25,-11,-10,-15,10,-35,2,-8,6,17,-4,0,13,-9,0,-19,-7,2,3,-2,17,1,11,-1,-3,0,-9,-5,12,1,-5,-2,-5,2,-4,-4,-10,-3,-4,-1,3,4,-3,0,3,-6,10,0,3,5,0,-5,-4,4,-3,-5,7,1,-1,4,4,4,3,6,2,1,3,-2,0,-2,-5,-1,-6,-2,3,2,-5,2,-5,4,-1,1,0,-1,-6,1,1},
{-55,-25,3,-4,-20,-25,35,-14,-8,5,21,26,-1,3,-15,-14,-10,-13,1,-12,-2,8,4,10,0,2,-11,5,-8,6,1,6,1,-1,-3,-1,-1,-7,-3,6,0,-3,2,8,0,8,1,1,-9,-2,-3,-6,-5,1,0,1,-1,3,3,3,-3,4,0,2,1,-1,-1,-1,-3,1,6,4,-2,4,-2,3,-4,-1,3,4,-1,1,1,3,-1,1,1,5,1,1,2,0,1,-2,-2,-2,0,2,6,-1},
{7,-24,-47,12,-31,-3,-8,-4,-19,-39,-8,2,9,-16,5,10,-22,-11,-2,21,24,13,-8,-3,18,-17,-4,0,-10,4,-13,-10,17,-2,2,-6,-13,-6,3,10,-6,-11,-9,3,-8,-4,-3,14,11,17,7,9,-7,-3,-10,-1,-9,-2,0,-6,16,20,-8,-7,4,-1,-10,-3,-1,6,0,1,-6,-7,6,7,3,2,4,-2,6,5,3,-1,-3,-2,-6,-1,0,4,-2,-13,10,-5,3,-8,2,4,9,0},
{11,56,-27,19,7,9,-8,5,-25,32,6,-7,2,1,-20,5,-9,-4,-20,-2,19,-6,-2,16,-1,-5,-15,1,23,14,1,-7,-3,10,-13,-9,5,-2,-2,-9,-2,10,-5,-16,8,-4,2,-3,4,2,-2,-3,-3,0,2,1,1,-4,5,-5,-13,-8,-7,-1,-9,8,-1,7,-1,-1,4,-3,0,-6,3,0,-1,1,-2,1,6,0,-2,5,-5,-6,1,7,-5,-4,8,-6,2,7,3,-3,4,-2,-1,-1},
{-1,42,-22,-17,-28,-3,28,43,-19,6,11,-12,11,-7,-29,-17,10,30,10,6,-6,4,16,-10,2,10,13,11,-1,-10,-3,-23,2,-19,-6,8,-12,0,-2,1,-11,-3,-2,3,-2,-9,5,1,0,8,-7,-10,-5,2,-7,-1,6,1,-1,9,-9,-4,-3,13,6,0,-2,-8,10,-1,1,4,-2,8,-6,2,5,4,1,3,3,1,-2,-6,-8,4,4,-2,-3,-3,-7,4,2,2,-3,2,-1,-6,4,1},
{5,-22,-44,25,6,-19,22,5,41,-40,13,3,26,-24,27,-16,15,-6,-1,23,18,-9,6,0,16,-12,-8,25,8,-34,7,-3,1,-5,-23,-5,-7,-10,-18,7,-2,-19,13,15,12,-10,-4,22,12,9,-6,8,12,2,-10,9,20,-6,-1,4,13,-6,10,0,7,3,-9,10,-2,-5,-6,10,4,-19,9,6,-6,6,-3,2,-5,3,4,-11,-7,-1,-1,9,10,5,4,-5,7,-2,-2,4,5,2,-1,-3},
{-15,41,-17,9,7,-8,-45,10,-10,5,-22,15,-14,-1,3,9,6,-1,-6,1,5,-1,7,-7,2,6,-13,-7,2,-7,2,-7,10,7,7,0,1,10,-12,-10,4,-1,7,12,5,-1,3,-2,-14,6,-4,3,-3,8,1,6,-6,0,10,-2,-3,6,7,-6,6,-3,-5,-5,-7,-1,7,-1,-1,3,-2,-2,2,0,5,6,-2,9,-2,1,3,7,-4,0,2,0,-3,-5,1,-3,0,0,-1,-4,-3,-7},
};
*/
//20-29 samples
/*
my_num input1[10][784] = {
{-23,29,23,-54,4,6,15,10,26,-45,-7,3,-11,-11,7,3,-8,-7,-13,-10,-10,-5,-7,17,-11,-9,7,-6,-3,-8,9,-3,-6,3,-1,-4,-1,-5,1,6,-9,-4,3,1,0,6,6,-6,6,3,4,-1,-6,-12,9,-4,3,2,-4,-3,2,-5,-3,-1,3,-2,-7,2,0,-3,-1,-3,-7,-6,1,2,3,-2,-1,2,3,0,-3,4,0,-3,1,3,-1,-2,7,5,-2,-6,2,0,0,1,2,0},
{11,-1,-19,31,22,-49,-15,-12,-17,-25,-21,-1,15,17,3,3,18,17,15,-14,-5,13,8,-12,-19,-8,4,-1,15,-9,11,10,8,-4,-3,-5,2,6,7,2,8,-7,15,2,3,3,3,1,-1,10,8,-2,4,-6,2,11,8,1,0,-3,-2,1,-3,7,4,10,4,3,-5,-13,1,12,1,0,-5,-4,-3,-3,-7,4,6,3,4,2,0,2,3,-2,2,1,0,-1,-4,-2,-10,3,6,3,-2,0},
{-6,13,-7,50,-10,9,9,1,13,0,-11,29,18,5,-33,-9,-12,11,17,7,-2,-26,8,26,-5,20,5,8,-20,4,9,6,2,5,-3,-7,-14,17,-9,-2,-4,-1,-11,-9,7,-5,11,-4,-2,-5,12,-8,4,1,-6,-11,-8,-14,7,2,-4,0,4,-3,-6,2,1,-1,-3,-3,-10,-2,-1,-7,-4,-8,0,2,1,-2,0,10,-9,-4,-5,-4,-2,-1,2,4,8,-2,19,0,3,-1,-1,-4,-1,13},
{-4,-7,8,-25,-2,-34,-29,-14,-26,11,7,-13,-9,16,0,10,20,14,27,0,-1,-4,-16,9,24,1,6,4,-10,0,-11,-6,-16,-5,-11,2,12,2,0,-10,17,-1,-6,2,4,-1,-1,-2,4,0,1,-10,5,2,-4,-9,-5,3,-8,5,9,5,-6,6,-13,1,5,3,-5,-4,-7,2,0,7,3,5,0,7,-1,4,-2,4,-4,7,-5,1,-5,-1,1,-3,1,2,4,9,6,1,-10,4,0,-9},
{-22,30,-29,30,-15,3,-26,10,-5,12,-17,2,-13,11,2,14,-10,5,0,1,10,7,-16,10,5,-2,0,5,4,2,-6,3,2,13,3,6,-6,-2,2,0,-8,-5,-8,3,0,-12,3,-9,8,1,1,11,-9,-1,-4,-2,5,8,4,0,-6,1,1,8,6,-5,-3,2,-1,2,-4,-4,7,1,-2,2,1,3,0,-1,-1,-10,-4,2,1,-5,4,8,3,2,-3,-1,1,2,-7,0,-2,-1,-1,3},
{119,-7,43,3,-28,17,23,-12,20,23,-12,16,-6,22,-7,26,0,4,2,26,-26,-14,-15,-4,1,9,8,-2,1,6,10,10,0,-5,2,-20,-2,-3,2,1,5,-8,9,0,-18,4,5,-3,-8,1,2,8,2,-1,3,0,-14,-9,7,-9,-5,6,-5,-4,8,3,4,13,-5,7,-2,9,0,2,-6,7,-3,-5,2,-1,1,2,-2,-4,0,5,1,3,-3,-6,7,3,-7,1,-2,-6,-6,-8,3,-1},
{-16,37,-34,10,-31,-2,-12,34,-3,16,-19,-33,13,4,2,-9,8,-11,0,-12,8,3,4,1,2,-5,6,-3,2,-3,-7,5,-2,-11,10,-13,-5,-1,-12,-7,13,-4,12,-1,2,-2,0,1,3,-1,-11,3,-11,-5,2,-3,0,2,6,-10,6,-6,8,-2,3,-7,6,5,-3,-1,1,-6,1,-5,4,10,-13,-8,1,1,-10,7,-1,-2,0,5,6,-3,1,2,3,-1,-4,3,3,1,0,7,-2,0},
{14,55,-11,17,14,-9,-45,-6,-16,7,-4,-4,3,2,-9,18,-14,-5,1,-28,-2,4,12,4,8,-6,-19,4,6,-9,-16,-14,-2,-5,1,1,14,-6,-12,8,0,0,6,8,-4,-8,3,4,12,0,-1,1,-4,-7,0,8,-3,3,0,-7,-7,-3,-4,1,-6,-4,6,-1,4,-1,-3,-9,2,4,-2,1,0,0,-2,-5,0,4,-3,-1,-5,-6,5,-8,6,-1,-4,-2,5,3,1,4,-4,4,-5,-2},
{71,-22,-12,-21,0,-3,7,-6,-10,-23,-17,-40,-16,-42,-26,-5,-10,15,-5,-16,3,-9,15,-4,-4,20,-4,11,0,-4,-1,9,-11,2,4,9,0,0,-1,-4,8,2,1,-5,-4,8,15,-2,4,-5,-4,2,6,-9,6,-1,-2,1,6,-2,0,-6,8,-2,2,-6,4,0,-3,0,-2,-4,7,-2,2,3,5,7,0,-2,1,-1,2,-7,1,7,-2,-1,2,-1,-4,-1,-1,3,-3,-3,-4,1,0,2},
{-48,-10,-7,6,-27,-28,16,-13,-21,0,20,22,16,-14,5,-2,-9,-1,5,-4,-8,-2,7,-1,-4,5,-24,-3,1,3,-14,11,-5,-1,-2,8,-3,18,5,-4,1,-1,4,3,10,-2,9,2,0,-1,-2,5,-4,-6,1,-8,4,-7,-4,-7,7,-4,2,-1,2,-2,-2,2,6,-9,-1,-2,5,0,-1,-3,-1,-4,-5,-2,-4,-6,0,-2,-3,-8,-3,-6,-1,-2,-1,3,0,2,-3,7,5,-2,-2,-2},
};
*/
//30-39 samples
/*
my_num input1[10][784] = {
{-11,-16,-34,-32,-1,-30,23,29,3,-3,28,-5,6,31,0,-9,7,27,8,3,7,-3,-28,10,-5,10,-18,5,8,0,0,-9,10,-3,-21,9,6,-3,4,-2,-11,-12,1,-3,2,9,-2,-1,-6,6,6,-5,-3,-1,-4,-4,-8,-8,1,1,-2,4,-1,5,-3,9,6,-6,-10,-6,1,-2,2,-1,-1,-3,0,0,4,3,-3,1,-2,2,-1,-4,6,-1,1,2,-3,-3,-1,1,2,2,2,2,-3,-3},
{-47,-1,-17,8,-29,-26,4,-4,-21,20,11,16,14,-9,11,-5,-13,-3,-6,-5,5,-6,6,2,8,9,-26,-4,-4,-7,1,7,-4,10,4,5,3,1,0,-3,-5,-2,3,2,13,10,12,2,-6,3,-2,-6,6,-4,-1,2,1,7,-5,-2,-1,0,2,-4,2,-3,-2,2,7,-6,8,-1,-11,4,1,-2,-5,1,-1,0,0,-3,3,-1,0,1,1,-4,8,-1,-2,-4,3,2,0,3,8,2,1,-4},
{-4,-20,-67,-8,7,-36,-10,6,16,-23,52,-7,-7,-13,22,16,-10,6,2,-6,-7,-2,-5,-2,-21,11,-3,4,-1,-3,11,-17,3,-2,6,14,-6,11,-1,4,3,-5,4,-6,7,1,-1,-4,-9,14,-7,-3,7,-3,-3,-1,-8,5,-3,-3,-5,-5,5,-5,-1,-3,6,-9,-3,4,6,1,2,1,-4,0,1,-4,-2,1,0,1,-1,3,2,5,-3,-3,4,-2,-3,-1,-6,-3,3,-5,0,5,-3,2},
{29,16,13,58,-44,-3,-8,-34,6,3,-16,8,-1,-5,28,8,-30,29,-5,13,-6,0,-22,-3,-11,-9,9,-1,-3,-7,-6,-18,-1,-6,-7,-10,-14,10,7,-7,-9,5,16,15,-5,2,2,3,-10,-1,-8,10,8,14,12,1,-4,7,-6,-7,-2,0,-1,2,-21,13,3,-2,-2,2,-4,-9,8,1,-3,3,-8,-5,2,-8,0,10,-3,-10,-8,8,-1,-2,4,-2,3,0,-4,4,-15,5,0,0,-4,-2},
{-17,16,31,-23,6,63,14,2,-20,-20,17,-29,-4,17,16,6,3,8,6,-4,11,-15,4,15,-2,13,-19,2,16,-9,3,-5,-9,5,2,-3,2,-2,5,2,-6,-1,-2,4,-4,3,-9,-4,8,9,-5,-3,1,3,-5,-6,-8,-7,-2,0,4,5,0,3,7,6,7,-2,4,0,0,7,-4,-3,1,0,-1,-3,3,1,1,5,-1,-4,4,-1,6,4,-1,0,-1,-4,2,-5,0,-1,2,1,3,7},
{26,-27,14,33,-11,28,5,27,-53,-2,25,3,24,12,23,28,0,-9,-5,20,19,16,27,6,13,3,11,-4,0,-9,20,8,1,-20,3,18,-6,-1,-1,-1,3,0,-9,-8,-13,3,12,-5,4,2,10,12,-9,-19,7,4,0,0,-1,2,-4,7,4,-3,6,-6,-5,7,3,10,6,-5,-7,8,4,-6,2,0,-5,4,-8,-4,6,3,4,-4,-2,-4,3,-1,-1,-1,5,-5,-1,-8,-6,1,5,3},
{-9,43,-23,-4,-12,14,31,26,-29,15,5,-4,-3,-4,10,-13,28,7,6,9,-11,-13,19,7,-8,9,4,-5,2,4,2,-5,-8,-1,-5,-7,13,0,9,-3,-1,29,12,-5,-5,4,-11,-3,-8,8,2,5,2,0,8,11,-7,-7,-5,-2,16,4,-7,6,-7,-2,-5,6,0,0,1,-3,4,-5,6,-5,2,4,0,-8,5,2,-4,-4,5,-4,-7,6,-5,5,0,-11,-5,-1,1,0,2,-1,-3,5},
{-55,-8,-5,0,-24,-26,22,-20,-14,8,23,21,13,-9,0,-14,-16,-6,1,-3,-7,2,11,-3,-1,9,-23,4,-3,5,-6,7,-1,-3,2,6,3,14,1,3,2,5,4,0,7,6,5,5,-2,1,-4,1,0,-3,-1,-9,5,-2,-6,-1,6,-2,-3,-3,-2,-3,-2,3,-1,-3,2,1,-1,-3,0,-4,-3,-2,-4,-3,-5,-7,1,-4,3,-2,2,-5,-2,0,0,-2,1,-1,-1,2,3,-1,2,-1},
{-6,-50,-18,15,-18,-9,13,-2,-18,6,3,-2,9,5,-9,1,19,24,8,-6,13,8,-9,11,1,-11,-10,-3,-2,21,3,-18,0,6,-4,6,4,-15,11,1,-1,4,13,-3,-18,12,-1,-4,-3,1,9,-8,-9,0,12,3,6,13,7,-7,3,2,-3,2,-1,0,4,-1,-8,2,-7,-1,-4,2,3,-7,9,-6,-6,3,0,14,6,0,-7,9,3,6,-6,2,-4,-3,0,9,3,-1,1,-6,3,-7},
{-57,-35,6,-9,-12,-21,29,-18,18,7,25,12,-4,1,-22,-9,-2,-10,-5,-7,-4,3,7,1,-7,-9,1,2,5,11,-2,0,6,-3,-6,-5,-3,1,-2,-3,3,4,1,2,-5,-2,-8,-8,0,-2,6,1,-6,5,0,-3,-4,-5,2,2,1,0,-1,1,4,-3,-2,-4,1,1,1,1,1,-5,4,4,5,-2,6,-4,3,0,-2,-1,1,-4,-1,2,0,2,1,2,-3,-2,-2,3,0,0,2,-1},

};
*/
//40-49 samples
/*
my_num input1[10][784] = {
{-54,-12,-5,19,-44,-11,0,-11,-18,-8,12,3,-1,0,-5,-9,-3,0,0,-8,-6,7,3,7,-7,2,-6,6,-4,5,-5,3,4,-5,-1,1,-2,0,-8,8,6,2,5,4,1,2,3,2,-4,-1,-4,1,-4,1,-1,-2,1,2,8,5,5,3,-4,-2,-6,-4,0,1,1,-1,2,0,-1,1,-3,-2,-5,-3,-1,5,-2,-4,-8,5,3,4,5,4,0,0,-2,-4,3,-3,3,-1,2,2,3,-1},
{-26,38,-12,-5,-18,7,26,10,-13,13,-8,-10,-18,13,14,-11,11,9,13,7,-10,12,-12,6,-8,4,13,-3,-14,9,-2,2,-17,6,8,-2,-13,-4,9,3,-1,5,-3,4,9,0,-3,-6,-2,-9,-5,-1,-10,-3,-8,2,-10,4,1,-5,6,-5,5,-8,1,-4,-1,-1,2,-8,1,-3,-4,-4,-6,3,0,-3,-8,1,2,2,1,-5,-4,8,-4,1,3,-6,-3,-4,1,3,-3,0,-2,3,-3,2},
{-26,44,-22,6,28,26,-18,5,6,11,-16,46,-5,-7,-11,4,-1,-6,3,17,5,-6,9,2,1,5,-15,-1,-5,11,2,-2,13,14,5,-1,3,13,-3,2,-12,9,-8,1,2,21,0,-1,-1,3,4,-3,3,3,4,-4,-8,-5,-1,3,-3,-5,-2,4,0,-1,2,4,-6,0,3,-2,-1,-8,1,3,-1,2,2,-2,-2,0,5,3,-5,3,-3,-3,-7,6,2,0,1,-6,6,3,2,-1,-2,2},
{-31,-25,9,36,-19,1,-22,6,8,22,8,-4,-10,-10,-6,-10,-10,13,-8,9,-1,17,-13,-16,-7,-17,9,-14,0,2,-2,-4,-2,10,-12,-20,-3,-10,-15,-2,-9,1,6,10,-5,3,4,-4,15,2,9,-4,7,-16,2,-6,11,-9,-14,-1,-8,-9,0,-3,8,2,2,3,-14,12,-4,-5,0,0,4,3,5,-1,1,3,-3,-4,-3,0,1,-1,0,9,-1,-8,-10,-7,-1,2,-2,13,5,9,-1,3},
{-27,-15,-8,-4,-6,-35,20,25,-22,-13,22,20,5,14,8,14,15,6,0,-13,0,-2,-27,-1,-4,0,-25,17,-8,-12,-13,-7,9,13,3,9,-15,9,0,1,1,1,3,-6,17,-3,2,-2,-10,-6,-4,-3,5,2,5,-5,1,-1,-1,1,13,-4,1,-2,3,-3,1,-5,-1,0,13,0,9,2,0,0,-3,-3,-1,-4,-4,-5,-1,2,-1,-9,1,0,3,-1,-3,-1,-2,2,3,-2,5,1,-1,2},
{6,-26,-19,-22,0,-35,-35,8,-24,-3,4,-13,7,-1,4,-9,2,9,-1,7,-7,-7,-25,7,-7,-1,-5,-7,6,-2,2,12,-1,-22,12,-7,10,2,-2,12,6,-3,-1,3,8,-9,4,-2,0,-3,10,6,-7,-1,-3,-12,0,-2,-2,4,-9,-5,-8,1,-5,-7,2,9,1,-4,-1,-4,2,1,-2,3,-1,3,-5,-4,13,-1,7,-2,-3,-2,8,-6,-1,6,0,5,0,2,3,8,0,0,1,5},
{-29,0,-31,9,0,-30,10,4,-13,24,14,9,22,6,26,11,-20,-8,5,-20,0,0,-9,7,0,7,-23,-9,-16,-27,-16,8,-5,8,1,22,-2,3,6,8,-9,-1,-3,6,2,-13,18,5,-2,-7,-6,3,13,-5,0,-2,-1,0,-12,1,8,2,0,-2,5,10,3,2,6,1,-3,-6,5,5,6,-3,-4,3,-3,2,1,-5,6,-7,-1,-5,-4,1,4,0,-3,-1,0,6,2,-2,-5,-3,-2,-1},
{-30,1,13,38,-2,10,-10,12,-15,0,-14,2,-25,-15,15,7,10,1,-8,-8,-2,3,-2,5,1,8,11,-15,-9,0,0,8,-10,-6,18,3,7,-2,1,-10,2,10,-11,8,0,-9,-12,3,-1,5,-4,10,-7,2,3,1,-2,-9,-6,11,-1,9,-3,-1,6,1,1,6,-6,-11,-4,-1,-7,0,3,6,7,-6,1,10,2,-4,3,0,7,0,6,-2,0,-3,-2,5,-1,5,3,0,9,4,-4,4},
{35,65,-38,-16,51,4,-33,3,20,7,-10,33,20,6,-9,13,-7,-13,-10,-10,-13,-3,17,-1,-5,5,-6,-1,3,-8,-8,9,2,0,-7,0,8,6,8,3,-4,3,-4,-10,-10,0,-7,0,12,-4,-4,-4,-6,3,-5,-3,-8,3,-4,-9,-3,0,-2,8,-1,-2,2,6,-6,3,-5,3,-6,-1,7,-2,0,-1,-1,9,1,-10,4,-3,-4,-4,6,-1,3,4,4,7,2,6,-4,-2,-1,1,6,2},
{13,47,-17,48,3,24,-36,26,5,0,16,-19,-7,-1,-27,8,-3,-16,15,-3,-9,-8,-3,14,-1,-1,-10,5,-11,7,-7,10,-4,1,-8,5,-8,8,-17,16,-12,21,-2,2,0,0,-5,11,0,0,2,-5,3,-4,-10,1,7,-6,-2,0,-10,-10,-3,5,-8,-6,16,-7,-2,-1,-7,1,-5,-2,3,-10,1,11,-7,-2,2,4,1,8,-4,-3,-1,0,0,-1,2,1,-5,-5,-1,-3,-5,-5,-1,1},
};
*/
//50-59 samples
/*
my_num input1[10][784] = {
{-1,-14,12,16,4,-57,-9,24,-6,9,7,-26,-3,-1,-9,10,37,-9,3,5,-3,-4,-9,7,-8,7,12,-4,17,9,18,-3,8,12,-6,3,-1,5,-6,-1,7,-13,-7,4,2,-6,3,10,7,12,-5,1,0,1,-4,0,5,3,-2,-5,0,2,4,6,-6,1,-4,4,5,-4,-3,3,4,3,-3,-9,-7,-1,-3,3,0,-2,2,-4,0,2,5,-3,1,1,0,0,4,-5,-3,-3,4,2,-7,-2},
{27,-22,-57,2,15,-5,29,5,52,-32,1,11,-6,-12,22,-22,25,8,-9,11,21,0,21,9,25,9,-9,9,28,-15,5,-7,-10,-9,-15,1,0,-10,-10,8,-14,4,-1,18,-11,-9,5,5,2,4,-2,5,-18,8,-8,-5,9,-5,-1,1,-5,-6,-8,4,-3,7,-7,-8,-2,1,4,-5,-1,-5,0,5,-3,7,-7,4,-1,-3,3,-2,-1,9,-3,1,-4,-3,-6,-2,0,2,2,-2,5,-3,-6,-1},
{8,18,0,-25,-15,-34,-35,-8,15,6,-5,-9,-10,-2,-7,19,3,5,45,-20,8,6,-8,1,-13,9,-15,5,-6,-12,7,-7,7,-15,-3,3,-4,2,6,-5,13,10,0,8,-4,10,1,4,5,6,11,3,-1,8,-2,-2,-2,-4,-2,-3,5,11,12,1,-1,-8,2,10,-3,-3,1,-6,0,5,1,-3,5,-2,8,1,-10,-3,3,5,-5,1,-1,-6,1,2,0,-2,2,4,1,-4,1,-8,-4,-5},
{-1,-13,-51,22,-33,-1,-18,-7,-9,-34,4,1,4,-9,5,-2,-4,-4,-16,21,5,1,2,9,17,-2,-4,-5,-2,12,1,-5,0,-2,7,-6,-18,-14,8,7,-16,7,-6,-5,3,8,1,-4,5,3,-7,4,2,1,-8,-10,-4,-3,0,1,0,4,-8,-5,-4,-10,5,-5,3,3,-12,-18,-4,-4,6,3,0,-8,-5,-4,1,2,-4,6,-2,-9,-4,-3,-1,-3,-2,7,2,0,9,-5,-1,-2,0,0},
{14,-3,-22,57,-13,29,16,7,18,6,7,41,17,-12,-2,4,28,-17,0,-1,5,-22,-33,17,-3,18,4,20,-25,-25,-4,2,-16,-16,-9,-4,6,18,-1,0,6,6,-16,6,0,11,-2,18,15,-1,-11,-6,0,-4,-14,26,-1,4,-9,-2,-11,-6,1,-15,4,1,10,5,-6,-3,-5,0,6,2,4,-5,3,2,-1,8,9,-15,-16,-8,3,-2,4,1,1,13,2,-4,0,-5,-1,-6,3,5,-9,2},
{41,-9,-10,-18,8,-28,-17,-14,-8,-16,-2,-54,10,-39,-19,-7,4,17,-11,-7,-22,-5,10,-8,3,4,7,-6,6,5,-1,8,-15,5,15,3,0,3,1,0,5,3,-5,-4,1,1,18,19,4,1,7,-13,5,9,-4,7,6,0,-5,3,-1,-2,4,0,-2,0,2,2,5,4,1,0,6,-2,4,5,6,1,3,4,-2,-5,-2,2,5,-5,-3,5,1,-3,-2,4,8,-6,-2,-1,1,-6,-4,6},
{36,54,-27,40,4,8,-48,9,7,2,35,8,15,13,-25,27,-1,-5,8,-16,13,2,8,14,-9,16,0,8,-4,-3,-3,-1,6,7,2,1,4,-2,-11,-6,-14,-4,-16,-2,-8,1,-1,4,10,-7,9,-9,-6,-6,-9,-7,-2,-2,2,-3,2,8,1,-2,8,-4,1,-2,3,-2,2,0,-7,3,3,2,3,0,-1,-4,2,0,-4,0,2,-2,6,4,3,0,1,1,5,-2,2,-4,-2,2,1,2},
{-60,-26,-3,10,-34,4,2,-9,10,-2,3,-8,-16,14,-20,-3,-6,1,-10,-2,2,0,1,4,-10,-4,16,1,1,-6,-2,-4,6,-5,-5,-10,7,-9,-2,-1,3,2,0,-2,-4,-8,6,1,5,-5,-2,2,3,-3,6,-2,-4,0,2,3,-10,-2,-4,-2,-2,2,5,3,5,-5,-1,-4,1,4,-3,0,1,4,0,2,0,1,4,-3,3,1,-4,3,2,3,1,-5,4,-3,1,5,0,2,0,-1},
{13,67,-12,2,4,-10,-23,10,15,23,-1,-10,-1,-4,-28,-5,5,-14,0,-24,22,-8,11,-23,-5,-4,-17,-1,3,0,-8,-3,9,0,9,1,-3,7,-5,-8,8,4,-4,-17,7,-5,2,12,12,13,2,-1,-4,0,1,0,-8,1,-1,1,-4,1,-7,6,-5,-6,3,-5,0,2,3,-7,-1,4,7,2,-2,6,-2,4,-7,3,2,-2,2,3,11,6,-3,1,2,3,3,6,2,-4,3,-4,-4,-3},
{-36,2,13,5,-41,-3,-22,1,12,-21,-10,-18,5,-16,-6,19,-10,16,14,-7,-11,11,-7,16,8,-8,2,2,13,0,5,-5,17,-5,7,0,8,-11,-6,-8,-4,3,-4,-4,9,0,7,0,-7,4,7,4,6,10,3,-5,-12,-6,1,-2,4,-6,3,-1,-1,5,-3,-4,-2,-2,10,3,3,6,1,0,6,5,-2,5,3,-3,2,10,-2,0,-2,-3,-6,5,4,-1,-5,-2,-6,0,-2,1,8,0},
};
*/
//60-69 samples
/*
my_num input1[10][784] = {
{7,33,-56,18,-23,-11,2,42,16,1,-6,-43,34,8,4,-26,-13,-19,15,3,2,12,19,1,10,14,15,-9,-12,-14,-10,1,2,-1,21,-5,10,2,-7,-10,-1,8,12,16,-10,-7,-6,-7,1,-5,-2,-18,-6,11,1,1,14,11,0,-15,-4,-2,-4,-3,-6,0,-3,1,2,3,1,-1,2,-1,1,-1,-2,5,11,5,2,-15,4,5,-5,4,-1,-1,-6,-5,1,3,4,3,4,-4,1,4,3,-2},
{18,5,58,2,12,11,7,-28,-11,14,22,6,8,4,27,-5,3,16,-27,1,10,7,2,-20,-5,-7,19,-4,7,-11,-23,30,2,9,-5,7,15,2,-13,-5,-9,11,-4,6,5,10,-20,9,-6,-6,3,-1,-4,4,-1,7,-6,-11,13,-4,-3,-8,8,6,5,-2,3,-8,6,5,-11,-4,8,-2,0,-6,-6,4,0,0,4,1,3,8,-8,4,6,4,2,-1,0,-6,0,-6,6,-1,12,-1,4,0},
{-25,21,-22,14,-5,-9,-16,-15,-22,17,-5,-2,-11,-2,15,18,-4,15,-8,11,12,-14,6,7,4,-4,4,-10,10,8,-2,5,3,20,-6,-10,6,-5,-1,4,-4,-10,0,-2,5,7,2,-7,-7,8,11,3,2,7,5,4,0,17,0,2,-1,3,3,-6,0,6,-2,-2,4,-1,15,-2,-5,1,4,5,4,0,0,2,6,-9,-2,2,-2,4,0,4,4,-3,1,-4,-3,6,1,2,6,3,-2,-8},
{-19,-15,17,-4,16,13,-3,16,-27,-14,-7,31,-22,-3,22,-2,14,2,-17,-27,11,-12,14,-5,6,-5,3,-11,-14,22,-12,11,-1,3,0,-5,-6,-8,4,-10,10,10,7,-8,-1,-1,3,-4,-8,-2,0,-8,9,-6,-4,15,8,2,-1,0,-3,-8,-7,-9,8,7,-8,-2,5,3,-1,4,-4,6,-4,-1,-7,4,2,-1,8,-1,1,0,9,-3,2,-3,-6,-6,-2,0,-3,-4,2,5,2,-6,2,3},
{-6,34,24,-2,10,37,6,7,17,-27,39,-24,4,18,6,3,12,26,7,-21,11,-3,18,-15,22,24,-10,-17,15,-4,14,-13,-3,3,3,-16,-1,5,-1,-1,-10,-4,10,17,-11,1,-5,-1,4,2,0,6,-5,-6,-10,-11,5,-10,-4,6,1,1,-16,8,4,5,-6,3,0,12,-3,5,0,4,1,1,1,7,10,13,-6,-1,-1,-2,7,-3,-1,-2,-1,-13,-8,2,-4,-2,-1,5,-1,3,3,-2},
{-36,9,-16,-5,1,-29,-28,10,0,11,-9,6,1,-9,21,3,15,5,-9,-3,2,-15,-10,-8,14,-2,13,-20,4,-12,3,6,0,4,4,-3,-3,-3,5,-13,-1,-5,-3,-5,5,-8,4,-9,9,-6,9,0,-1,9,0,-4,-3,-8,0,1,-9,-3,-2,-5,2,2,3,-1,10,-8,0,-5,2,1,-1,4,7,-3,1,1,-3,1,0,-5,1,1,-5,3,-5,4,-5,-9,5,1,-2,4,-2,3,-5,-4},
{6,3,5,38,-21,16,12,19,1,-1,-16,32,17,12,-22,4,-3,18,-3,-12,-6,-11,4,7,-12,35,-4,14,-16,-3,-1,20,6,8,1,3,0,8,-2,-5,-8,-21,-27,-7,5,-9,3,-1,7,-12,-5,-2,-16,-6,4,-1,4,1,-7,5,3,-2,0,5,-8,7,-9,3,0,-1,-9,-5,-2,6,-1,4,-6,4,-9,6,-4,-5,2,5,5,3,-4,2,-5,-1,-4,-1,-6,-1,9,-3,-1,3,-6,-4},
{-3,44,-1,31,-4,25,-35,16,-16,31,8,8,12,-16,-12,6,-2,-20,16,2,-8,-11,-19,13,-2,2,-13,3,25,-8,-5,12,-10,4,-1,-18,6,-21,2,-7,7,2,-2,-8,-10,3,-5,5,-3,7,-9,-2,4,-2,8,1,-5,9,5,12,0,-4,9,-14,6,-3,-4,7,1,-6,-2,1,-1,-6,-3,-7,0,-2,-5,-10,-5,0,2,4,-3,-6,1,-1,-6,-3,-1,-5,-1,-3,-1,-1,2,0,0,-8},
{4,-29,-50,-40,55,-17,10,21,19,6,7,12,-14,3,-6,25,-2,15,-1,-18,-14,-17,-11,2,5,17,8,4,14,0,-3,-9,-2,4,4,11,6,1,-3,3,1,10,-8,-3,4,4,1,3,0,6,-4,-2,5,-1,-1,-1,-2,2,-8,0,-1,2,1,-3,5,0,6,-1,-1,7,0,5,-2,1,-4,3,-2,0,-2,-1,0,5,2,-3,3,0,-4,-2,2,5,-3,-4,0,-3,2,-2,-1,3,-2,5},
{43,-6,-2,19,-59,20,26,-20,2,36,-5,7,5,17,33,-5,45,9,-2,-7,-15,-6,-9,5,-14,-9,-6,-4,23,9,-8,8,-2,-3,8,0,30,-4,0,10,2,-7,-1,3,0,11,-1,6,6,-6,-15,0,8,-3,-1,-3,-1,7,3,-9,2,-3,-5,2,8,-12,9,3,13,7,10,0,-1,-3,5,-4,15,-7,-1,-4,-4,-3,3,4,-4,1,-2,7,-7,-6,-10,1,-4,2,2,-5,4,-5,1,1},
};
*/
//70-79 samples
/*
my_num input1[10][784] = {
{-4,43,-10,-16,-37,-3,27,39,-13,0,5,-11,19,-4,-32,-17,8,25,9,5,-7,10,7,-9,13,6,17,3,-15,-15,-3,-15,1,-13,-1,5,-15,-2,-2,-2,-1,-6,-5,10,0,-10,7,-10,-13,1,-5,-13,-7,3,-6,2,7,4,-1,2,-8,-9,3,9,2,-3,-5,-9,5,-2,2,-5,1,3,-3,-5,-1,3,4,1,7,-10,-1,-6,-7,7,-2,-4,-3,0,-5,2,5,5,6,6,-2,-1,8,0},
{111,-33,-20,16,-46,33,9,-38,-13,0,-11,24,-3,-4,-7,16,9,-2,4,-1,-1,9,-12,1,1,3,-10,-11,-4,-6,7,10,5,4,0,-3,9,-1,5,4,3,3,0,4,-3,-6,-11,-11,2,-8,-3,5,-8,-2,8,-4,5,-5,3,-2,-2,-1,-2,-2,0,6,2,-5,3,0,-1,2,-5,6,10,1,-5,4,-5,1,2,2,3,0,-3,1,1,3,-1,-1,-4,1,0,1,-5,-1,-4,2,0,-4},
{31,-39,6,18,-23,7,-4,36,-46,-10,11,3,10,-1,-24,17,-4,11,17,-2,10,-13,10,7,-9,-6,8,8,-24,-21,1,8,20,-4,-2,-5,-22,11,-14,3,-5,-26,7,-3,8,-18,-5,-2,15,-6,1,-12,20,6,-10,0,-6,-2,-5,-10,9,17,1,3,9,-10,-3,4,-14,7,-6,6,8,9,-3,-1,8,-5,-9,-6,-5,2,-4,2,-7,2,2,9,-1,1,0,5,-1,4,1,5,-4,4,2,4},
{-24,-9,37,-32,27,36,14,-2,9,-15,-7,-40,14,8,18,-17,-9,-14,-12,-11,8,-20,-9,-2,6,-5,-31,-3,0,2,1,3,-7,6,-9,1,7,14,3,1,6,12,-13,7,-9,-4,0,1,5,2,3,3,1,-5,-1,-3,-7,5,0,-2,2,-1,-8,3,-4,2,7,3,3,0,2,0,3,-4,-4,-2,4,-3,1,3,1,5,-5,3,3,-3,-3,-1,2,3,2,2,2,0,2,1,-2,1,3,-2},
{-56,-16,5,-5,-23,-24,27,-24,-7,-3,30,12,5,-3,-5,-13,-9,-9,1,-8,-15,7,0,4,-4,4,-13,6,-6,9,-9,2,2,-6,0,7,-5,3,-6,6,1,9,1,1,4,0,3,5,-4,-6,-2,0,-5,-1,0,-4,4,3,3,2,3,0,-5,-3,4,-3,2,4,-2,0,3,-1,2,1,-5,-1,-2,-2,4,0,-3,-3,-1,0,3,3,3,-1,1,1,1,-5,-2,0,1,-1,0,2,3,1},
{-42,32,-2,-6,0,3,14,12,15,15,-8,12,4,-16,-14,-5,-14,-3,34,17,-21,15,1,-33,7,6,1,5,-11,6,6,10,11,11,4,-7,5,6,-1,5,9,7,-4,0,-3,-3,-2,1,-5,1,5,8,4,3,-6,-2,16,10,-4,-1,1,-9,2,3,-5,8,3,3,-4,10,2,-7,14,-2,9,1,-6,3,0,-1,-1,-13,1,10,2,-8,-1,0,0,3,0,6,-2,0,2,-5,-1,8,-2,0},
{-14,-41,-45,-9,-13,-27,-17,18,-11,-3,10,-3,3,8,-6,12,-13,4,-4,-11,-1,6,-13,-9,-17,0,-3,-23,7,5,16,3,-3,-10,-6,-5,-4,3,8,-2,9,1,10,-4,-10,-10,0,-5,2,14,8,-7,-5,-3,-2,2,1,-9,1,-2,1,1,4,2,3,-2,4,-1,10,-2,-7,-3,-2,-9,0,4,-1,-1,1,0,6,1,14,2,-2,-2,-3,7,-2,3,-7,-3,-6,0,-4,-2,0,3,-1,-6},
{-27,22,-11,25,-19,23,27,11,-8,-1,-9,-18,5,7,23,-1,24,-12,7,1,1,2,10,14,10,4,5,-5,14,2,6,7,-16,-16,-6,-1,5,1,5,-4,8,2,-5,2,5,-10,-7,1,-9,6,-1,3,3,-8,10,7,1,-10,10,6,8,-5,9,-4,7,-6,2,11,-8,1,-7,-10,-5,-1,-3,5,1,-3,-1,4,-9,-1,-6,-2,-3,0,-1,-4,9,-1,0,-14,-6,-9,-1,3,-8,7,8,3},
{-49,-4,12,-26,7,6,0,-7,23,-34,-1,-12,-8,-5,8,-7,7,-10,-10,-3,-11,-25,-5,3,-15,5,12,-13,5,4,-19,-2,11,-6,2,-7,-7,1,7,-3,5,5,-3,-7,10,-5,3,2,-1,8,-11,2,0,-5,9,1,10,4,2,6,-11,3,-3,-5,0,4,0,1,2,5,4,5,-4,6,1,-6,-1,5,-8,0,2,0,2,0,-6,-3,-3,8,5,2,7,1,-1,-2,3,-3,1,-3,-1,4},
{5,43,40,-42,1,49,46,22,21,-26,5,-27,27,19,-10,16,-7,-5,5,5,7,4,-5,-8,11,-2,-12,-10,-13,3,9,8,2,1,1,0,4,-5,-3,3,8,-2,-18,3,0,0,-3,-8,-8,-1,-2,4,-4,-6,-10,6,-4,4,-1,-9,3,5,6,-7,0,3,5,-10,4,-6,0,3,3,-4,-3,-6,-2,-8,4,9,-3,3,-2,-4,1,2,-5,1,-2,6,-3,-4,-2,0,1,1,2,-1,8,0},
};
*/
//80-89 samples
/*
my_num input1[10][784] = {
{-8,48,-35,-2,-9,-23,-10,19,19,19,-31,-19,-3,11,23,17,-8,-6,-4,-5,24,17,0,19,4,1,10,-9,-2,-10,2,-5,15,4,5,3,-4,-7,-3,11,1,-12,8,12,-5,-8,4,-6,-4,-6,0,-5,-4,5,2,-6,-1,11,6,4,5,3,2,-1,10,-4,4,0,1,-1,-4,7,-1,0,-8,1,5,-5,6,-7,0,-8,-1,3,-1,2,3,1,-2,-3,4,0,4,2,-8,1,-2,3,-1,3},
{26,13,5,26,18,-50,25,-14,-42,-10,-15,-13,-12,14,2,7,-2,-7,7,4,-8,11,10,-3,2,-1,2,0,4,-2,31,12,-9,5,-1,3,9,-2,-10,-6,-5,-1,4,8,-8,9,7,11,1,4,4,-4,9,-6,0,9,1,0,-1,-6,1,2,1,0,12,-5,6,8,-2,-5,1,6,4,-3,-3,-2,-3,2,-1,0,0,-1,3,-2,0,2,-1,1,-1,-2,-2,3,5,-1,-3,0,3,4,0,-3},
{20,-27,34,52,44,45,4,35,-43,4,-3,-11,-9,-18,17,17,-14,-9,2,7,-4,9,-2,0,-11,-6,-6,-7,-11,6,-1,-11,7,-5,4,1,-2,8,6,11,-4,4,5,-10,8,4,-7,8,9,13,-5,12,6,-2,12,2,-8,4,4,7,2,-2,0,0,-3,2,1,1,1,-2,4,-2,-4,-8,-3,2,-13,-4,12,-6,10,-2,-4,-2,-6,2,0,-3,-2,-4,-1,6,4,-3,-1,-1,-2,3,-4,5},
{-12,53,-41,1,-17,8,-3,28,-7,27,-27,-12,11,5,12,4,9,-13,-6,-3,17,2,-1,8,1,2,-7,-9,9,3,-2,-7,8,3,8,-6,-16,1,-8,-10,-4,-5,7,-2,4,-3,-1,-4,8,1,-4,-7,-7,5,7,-5,-8,1,5,7,-3,-6,-4,-2,-3,-9,8,4,1,-2,-6,3,-6,4,-1,6,-1,-1,6,6,-1,-1,-2,-1,-1,9,5,-2,-4,-1,0,-3,7,0,9,0,-1,1,-3,0},
{-4,6,-20,4,13,20,-26,-33,31,11,-3,-1,14,21,-2,16,9,-6,-1,0,-28,24,16,12,-1,-8,7,32,-5,5,10,-9,-12,5,12,-4,-12,-5,-8,-4,9,13,-15,0,4,-2,-10,-9,5,-13,-5,-11,13,7,10,-5,-10,8,-21,-13,7,-11,-4,3,5,2,0,0,5,-3,-4,6,-8,2,3,2,-3,6,-2,6,8,1,2,7,0,-1,-2,-3,4,-6,-3,-2,-4,-7,2,2,0,6,11,-3},
{33,49,-30,6,41,10,-52,23,29,6,5,39,21,9,-14,6,9,-19,2,5,-15,-13,6,18,-10,12,-13,0,-2,-7,3,1,-1,5,2,-14,7,-1,-3,0,-4,9,2,-7,0,18,-8,1,3,3,5,-9,-9,-3,-5,5,-10,1,10,1,-2,-5,-2,-2,1,-9,1,-4,11,-1,3,7,-5,2,-4,0,2,1,-4,5,2,0,0,-2,3,-5,6,-5,11,-4,2,1,6,0,-3,-2,0,-2,-3,-3},
{-39,33,7,-25,6,37,53,1,6,-18,-10,-13,2,7,2,-6,-3,-4,15,1,-10,18,-7,3,0,15,6,-6,9,-4,-5,-13,8,-10,1,5,-11,1,2,3,-3,0,-5,4,3,-4,8,1,-1,-5,1,-9,7,1,-2,2,-5,5,1,7,-5,0,0,-4,1,3,-2,1,1,0,2,6,-4,2,-3,2,-1,5,5,-4,4,1,-1,1,-4,-3,0,-5,1,1,0,1,3,-3,0,0,4,0,-4,0},
{17,-4,-48,-8,-7,-56,11,8,-4,-19,12,2,5,-4,13,1,-18,-8,14,3,-4,-27,-15,2,-19,3,-7,30,-6,-3,-5,-8,14,4,17,11,-4,9,-13,11,-16,4,12,-16,4,-4,5,-1,3,-4,-4,5,0,-5,-6,-3,0,7,-12,8,4,-3,-1,3,1,-6,1,8,1,9,9,-2,2,-13,-5,2,-2,3,2,9,1,4,-1,-7,0,3,6,2,11,-6,3,-4,-2,-6,2,7,1,1,8,-7},
{21,33,-3,61,3,-10,19,-14,-14,-32,-13,16,7,4,9,19,-6,14,17,16,20,-14,13,16,-19,-15,5,-38,2,-5,2,-6,-9,10,-4,4,1,4,-5,15,9,6,-1,-7,-7,-1,3,3,-11,6,2,-9,6,3,11,-14,-1,0,2,-9,7,-1,7,10,3,4,-9,8,2,-3,3,-2,-7,13,-3,4,-5,2,1,2,-1,3,6,8,7,-2,-3,0,-1,-3,0,2,-4,7,-6,5,6,-2,3,3},
{-63,-36,17,6,-8,15,11,-5,22,-7,-6,6,-12,20,-20,13,1,-6,-6,3,-10,4,7,-7,3,3,5,-8,3,-12,-4,2,-5,-2,-7,-2,0,5,1,-5,-8,6,9,-2,4,-1,4,6,9,-4,1,3,1,-2,-2,-4,1,-1,-3,-1,4,3,4,-2,0,0,2,3,-4,-5,5,-4,-2,1,1,-2,-2,2,2,-2,-1,-1,-3,3,0,0,2,-2,-2,-5,-3,1,0,0,4,-3,2,-2,5,1},
};
*/
//90-99 samples

my_num input1[10][784] = {
{14,-41,-44,-29,1,5,-17,22,-14,-6,-13,-15,1,12,-4,-34,-28,7,2,7,-19,3,-7,6,-9,-3,-7,-21,12,9,7,13,-5,-15,3,-2,11,5,-13,-1,-14,-2,-4,8,0,-4,-6,0,3,3,-3,6,5,8,-5,12,-4,2,-5,4,2,-12,0,5,8,-5,-8,8,-4,-4,-5,3,-1,0,1,-4,-3,8,4,3,-1,2,2,6,-1,0,2,-3,0,3,0,5,2,-2,0,-3,-1,3,-3,5},
{-5,5,14,37,23,-49,-5,-16,-15,-7,-13,-15,15,14,-3,-16,9,2,23,-10,-4,-13,13,-2,3,-8,8,6,5,4,9,11,19,-17,0,-1,9,-4,-4,4,-9,-4,1,-12,-2,7,1,1,-7,3,2,-7,8,0,-12,2,-7,-1,2,-3,1,5,-3,-7,9,0,4,0,-4,3,1,-1,-3,-6,7,2,-4,2,0,-1,2,-3,2,7,3,9,-6,-6,2,2,-2,-3,6,8,-2,3,-4,-2,10,5},
{-37,7,24,1,-9,11,-26,-14,-9,-21,16,-14,0,-3,13,2,8,-6,1,-14,7,-17,-1,9,5,10,5,-11,0,4,-1,0,0,9,7,-7,14,2,10,-5,8,-3,-7,3,3,2,2,-2,4,3,4,-2,6,4,-4,-8,6,-9,-2,4,7,5,-4,4,-1,5,-4,3,3,2,4,0,-1,4,2,-1,-3,8,-2,-1,1,-6,-4,-2,-3,11,6,4,7,1,-3,3,-10,-4,-4,4,-8,2,-2,-3},
{8,-23,-28,-65,33,-23,39,35,6,2,-1,1,3,12,11,3,-8,13,2,-4,9,-5,-28,-1,3,6,-12,6,5,2,-6,-2,-1,-7,4,14,2,7,1,1,-3,-2,-4,-8,-11,-1,4,1,0,7,-1,4,-1,-2,0,-1,0,0,6,7,-1,-2,7,-7,5,6,-2,1,-1,-4,-8,2,-1,-8,3,0,-2,-5,3,1,2,2,5,2,5,5,-1,2,-1,5,0,-4,-4,2,3,-3,1,-4,-3,4},
{-43,-13,-8,0,12,-35,34,-22,-7,16,17,24,29,-4,11,4,-25,-14,8,-15,-5,0,4,-2,10,-3,-23,-5,0,-13,-14,15,1,-3,2,6,-6,6,2,2,-4,-3,6,2,5,-8,7,-15,2,-7,6,0,2,-7,-2,1,-1,2,0,1,5,0,1,-2,-2,2,1,-6,6,-2,-1,0,4,1,2,0,12,10,5,-3,3,3,-3,3,-3,-1,3,1,0,0,-5,2,-2,0,1,0,-3,-7,1,0},
{22,42,17,6,40,4,-1,-13,39,19,-14,32,-7,10,-28,-4,-31,-16,11,19,-9,4,9,-5,4,-2,-21,26,19,-28,1,24,-6,-4,6,-2,-13,4,-25,0,10,-7,6,-5,-5,0,-8,-4,4,8,5,-5,6,9,-3,-1,-8,2,-2,2,3,-1,0,-9,2,2,3,-5,0,-8,-7,-3,-7,5,-1,4,-1,6,-2,-4,2,-4,-2,-7,8,3,-5,-1,0,3,-8,-1,1,5,1,8,1,-1,6,0},
{-41,3,-23,8,-22,-24,-5,-4,-17,18,5,3,20,-2,21,-1,-13,-3,-4,-10,3,-4,-7,2,10,11,-22,-8,-5,-20,-9,5,0,11,1,12,1,-3,0,-1,-10,1,-1,3,12,-5,21,5,5,-3,0,-2,9,-1,0,3,-4,7,-6,-1,2,2,-2,-5,7,6,10,6,11,-6,2,-5,0,4,5,-1,-5,-2,1,-1,6,-1,2,-3,6,-1,0,-2,8,2,-1,-5,0,8,-1,5,-3,5,-7,-2},
{-34,3,-7,-13,14,-6,41,-13,40,-10,33,4,-10,19,-8,-12,4,18,9,14,-5,10,6,-15,7,13,1,-5,23,-2,-5,-10,6,-12,-6,0,-11,6,-16,17,-4,5,-4,6,-12,-13,1,-1,8,-2,6,-9,7,-9,11,-7,7,-8,-13,6,1,4,-10,-7,4,2,5,0,2,-1,12,5,-7,-1,-3,2,6,-9,8,0,10,-1,-5,-1,1,-4,3,1,3,-5,-2,0,-4,2,-8,-2,1,-3,-8,5},
{22,-8,5,37,-9,-30,3,-24,-27,-3,-27,-16,-3,0,2,23,-1,-6,-1,4,-14,25,10,20,-5,10,5,16,-1,-17,19,-5,-19,-8,9,-1,-8,6,1,-3,10,12,11,0,2,17,0,7,-2,6,0,19,-3,4,-17,9,-11,2,-4,-2,-7,5,-3,-12,3,11,-1,-7,-3,-8,0,7,12,-3,-3,1,2,-5,10,-7,-2,-5,9,-8,-9,11,4,0,9,1,8,4,7,2,1,-2,2,-3,-6,9},
{12,54,-39,26,34,20,-5,2,20,28,6,-25,-9,25,-12,-17,-7,-11,-3,-16,19,10,-11,15,10,2,-5,7,9,13,-13,17,4,-2,-11,9,-11,-6,-4,2,-1,1,-7,-7,0,-4,5,0,4,-8,1,-5,-9,-3,-7,-1,1,-4,13,-10,1,-9,4,7,-2,0,9,-3,1,3,-3,2,-2,3,1,-3,-3,0,-1,-8,2,-4,-1,5,0,0,1,-1,1,-6,-3,6,-3,3,-3,-4,-2,-2,-1,2},
};

