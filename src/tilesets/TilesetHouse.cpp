/*
 * Tileset generated automatically by the tileset editor.
 */

#include "tilesets/TilesetHouse.h"

/**
 * Constructor.
 */
TilesetHouse::TilesetHouse(void):
  Tileset(get_color(88, 72, 72)) {
}

/**
 * Loads the tileset.
 */
void TilesetHouse::load(void) {
  load_tileset_image("images/tilesets/House.png");

  SIMPLE_TILE(1, OBSTACLE_NONE, 0, 0, 8, 8);
  SIMPLE_TILE(2, OBSTACLE_NONE, 0, 8, 8, 8);
  SIMPLE_TILE(3, OBSTACLE_NONE, 8, 0, 8, 8);
  SIMPLE_TILE(4, OBSTACLE_NONE, 8, 8, 8, 8);
  SIMPLE_TILE(5, OBSTACLE_NONE, 16, 0, 16, 16);
  SIMPLE_TILE(6, OBSTACLE_NONE, 32, 0, 16, 16);
  SIMPLE_TILE(7, OBSTACLE_NONE, 48, 0, 16, 16);
  SIMPLE_TILE(8, OBSTACLE_NONE, 64, 0, 8, 8);
  SIMPLE_TILE(9, OBSTACLE_NONE, 72, 0, 8, 8);
  SIMPLE_TILE(10, OBSTACLE_NONE, 64, 8, 8, 8);
  SIMPLE_TILE(11, OBSTACLE_NONE, 72, 8, 8, 8);
  SIMPLE_TILE(12, OBSTACLE_NONE, 80, 0, 8, 8);
  SIMPLE_TILE(13, OBSTACLE_NONE, 88, 0, 8, 8);
  SIMPLE_TILE(14, OBSTACLE_NONE, 80, 8, 8, 8);
  SIMPLE_TILE(15, OBSTACLE_NONE, 88, 8, 8, 8);
  SIMPLE_TILE(16, OBSTACLE, 96, 0, 16, 16);
  SIMPLE_TILE(17, OBSTACLE, 112, 0, 16, 16);
  SIMPLE_TILE(18, OBSTACLE_NONE, 0, 16, 8, 8);
  SIMPLE_TILE(19, OBSTACLE_NONE, 8, 16, 8, 8);
  SIMPLE_TILE(20, OBSTACLE_NONE, 0, 24, 8, 8);
  SIMPLE_TILE(21, OBSTACLE_NONE, 8, 24, 8, 8);
  SIMPLE_TILE(22, OBSTACLE_NONE, 16, 16, 8, 8);
  SIMPLE_TILE(23, OBSTACLE_NONE, 24, 16, 8, 8);
  SIMPLE_TILE(24, OBSTACLE_NONE, 16, 24, 8, 8);
  SIMPLE_TILE(25, OBSTACLE_NONE, 24, 24, 8, 8);
  SIMPLE_TILE(26, OBSTACLE_NONE, 32, 16, 8, 8);
  SIMPLE_TILE(27, OBSTACLE_NONE, 40, 16, 8, 8);
  SIMPLE_TILE(28, OBSTACLE_NONE, 32, 24, 8, 8);
  SIMPLE_TILE(29, OBSTACLE_NONE, 40, 24, 8, 8);
  SIMPLE_TILE(30, OBSTACLE_NONE, 0, 32, 8, 8);
  SIMPLE_TILE(31, OBSTACLE_NONE, 8, 32, 8, 8);
  SIMPLE_TILE(32, OBSTACLE_NONE, 0, 40, 8, 8);
  SIMPLE_TILE(33, OBSTACLE_NONE, 8, 40, 8, 8);
  SIMPLE_TILE(34, OBSTACLE_NONE, 16, 32, 8, 8);
  SIMPLE_TILE(35, OBSTACLE_NONE, 24, 32, 8, 8);
  SIMPLE_TILE(36, OBSTACLE_NONE, 16, 40, 8, 8);
  SIMPLE_TILE(37, OBSTACLE_NONE, 24, 40, 8, 8);
  SIMPLE_TILE(38, OBSTACLE_NONE, 32, 32, 8, 8);
  SIMPLE_TILE(39, OBSTACLE_NONE, 40, 32, 8, 8);
  SIMPLE_TILE(40, OBSTACLE_NONE, 32, 40, 8, 8);
  SIMPLE_TILE(41, OBSTACLE_NONE, 40, 40, 8, 8);
  SIMPLE_TILE(42, OBSTACLE, 48, 16, 16, 16);
  SIMPLE_TILE(43, OBSTACLE, 64, 16, 16, 16);
  SIMPLE_TILE(44, OBSTACLE, 48, 32, 16, 16);
  SIMPLE_TILE(45, OBSTACLE, 64, 32, 16, 16);
  SIMPLE_TILE(46, OBSTACLE, 80, 16, 48, 32);
  SIMPLE_TILE(47, OBSTACLE, 0, 48, 24, 24);
  SIMPLE_TILE(48, OBSTACLE, 24, 48, 24, 24);
  SIMPLE_TILE(49, OBSTACLE, 0, 72, 24, 24);
  SIMPLE_TILE(50, OBSTACLE, 24, 72, 24, 24);
  SIMPLE_TILE(51, OBSTACLE, 48, 48, 16, 24);
  SIMPLE_TILE(52, OBSTACLE, 64, 48, 24, 16);
  SIMPLE_TILE(53, OBSTACLE, 48, 72, 24, 16);
  SIMPLE_TILE(54, OBSTACLE, 72, 64, 16, 24);
  SIMPLE_TILE(55, OBSTACLE, 88, 48, 24, 24);
  SIMPLE_TILE(56, OBSTACLE, 112, 48, 24, 24);
  SIMPLE_TILE(57, OBSTACLE, 88, 72, 24, 24);
  SIMPLE_TILE(58, OBSTACLE, 112, 72, 24, 24);
  SIMPLE_TILE(59, OBSTACLE, 0, 96, 24, 24);
  SIMPLE_TILE(60, OBSTACLE, 24, 96, 24, 24);
  SIMPLE_TILE(61, OBSTACLE, 0, 120, 24, 24);
  SIMPLE_TILE(62, OBSTACLE, 24, 120, 24, 24);
  SIMPLE_TILE(63, OBSTACLE, 48, 96, 16, 24);
  SIMPLE_TILE(64, OBSTACLE, 64, 96, 24, 16);
  SIMPLE_TILE(65, OBSTACLE, 48, 120, 24, 16);
  SIMPLE_TILE(66, OBSTACLE, 72, 112, 16, 24);
  SIMPLE_TILE(70, OBSTACLE, 88, 96, 24, 24);
  SIMPLE_TILE(71, OBSTACLE, 112, 96, 24, 24);
  SIMPLE_TILE(72, OBSTACLE, 88, 120, 24, 24);
  SIMPLE_TILE(73, OBSTACLE, 112, 120, 24, 24);
  SIMPLE_TILE(74, OBSTACLE, 48, 136, 8, 8);
  SIMPLE_TILE(75, OBSTACLE, 56, 136, 8, 8);
  SIMPLE_TILE(76, OBSTACLE, 64, 136, 8, 8);
  SIMPLE_TILE(77, OBSTACLE, 128, 0, 32, 16);
  SIMPLE_TILE(78, OBSTACLE, 160, 0, 8, 8);
  SIMPLE_TILE(79, OBSTACLE, 168, 0, 8, 8);
  SIMPLE_TILE(80, OBSTACLE, 160, 8, 8, 8);
  SIMPLE_TILE(81, OBSTACLE, 168, 8, 8, 8);
  SIMPLE_TILE(82, OBSTACLE, 176, 0, 8, 8);
  SIMPLE_TILE(83, OBSTACLE, 184, 0, 8, 8);
  SIMPLE_TILE(84, OBSTACLE, 176, 8, 8, 8);
  SIMPLE_TILE(85, OBSTACLE, 184, 8, 8, 8);
  SIMPLE_TILE(86, OBSTACLE, 192, 0, 8, 8);
  SIMPLE_TILE(87, OBSTACLE, 200, 0, 8, 8);
  SIMPLE_TILE(88, OBSTACLE, 192, 8, 8, 8);
  SIMPLE_TILE(89, OBSTACLE, 200, 8, 8, 8);
  SIMPLE_TILE(90, OBSTACLE, 208, 0, 8, 16);
  SIMPLE_TILE(91, OBSTACLE, 128, 16, 16, 32);
  SIMPLE_TILE(92, OBSTACLE, 144, 16, 16, 32);
  SIMPLE_TILE(93, OBSTACLE, 160, 16, 16, 32);
  SIMPLE_TILE(94, OBSTACLE, 176, 16, 48, 32);
  SIMPLE_TILE(95, OBSTACLE, 136, 48, 32, 24);
  SIMPLE_TILE(96, OBSTACLE, 168, 48, 24, 32);
  SIMPLE_TILE(97, OBSTACLE, 136, 72, 24, 32);
  SIMPLE_TILE(98, OBSTACLE, 160, 80, 32, 24);
  SIMPLE_TILE(99, OBSTACLE, 192, 48, 32, 24);
  SIMPLE_TILE(100, OBSTACLE, 192, 72, 32, 32);
  SIMPLE_TILE(101, OBSTACLE, 224, 0, 32, 40);
  SIMPLE_TILE(102, OBSTACLE, 256, 0, 24, 40);
  SIMPLE_TILE(103, OBSTACLE, 224, 40, 16, 24);
  SIMPLE_TILE(104, OBSTACLE, 240, 40, 16, 24);
  SIMPLE_TILE(105, OBSTACLE, 256, 40, 16, 24);
  SIMPLE_TILE(106, OBSTACLE, 224, 64, 48, 24);
  SIMPLE_TILE(107, OBSTACLE, 272, 64, 16, 24);
  SIMPLE_TILE(108, OBSTACLE, 136, 104, 8, 32);
  SIMPLE_TILE(109, OBSTACLE, 160, 104, 8, 32);
  SIMPLE_TILE(110, OBSTACLE_NONE, 144, 104, 16, 32);
  SIMPLE_TILE(111, OBSTACLE, 0, 144, 8, 16);
  SIMPLE_TILE(112, OBSTACLE, 24, 144, 8, 16);
  SIMPLE_TILE(113, OBSTACLE_NONE, 8, 144, 16, 16);
  SIMPLE_TILE(114, OBSTACLE, 0, 160, 8, 16);
  SIMPLE_TILE(115, OBSTACLE, 24, 160, 8, 16);
  SIMPLE_TILE(116, OBSTACLE_NONE, 8, 160, 16, 16);
  SIMPLE_TILE(117, OBSTACLE, 32, 144, 16, 8);
  SIMPLE_TILE(118, OBSTACLE, 32, 168, 16, 8);
  SIMPLE_TILE(119, OBSTACLE_NONE, 32, 152, 16, 16);
  SIMPLE_TILE(120, OBSTACLE, 48, 144, 16, 8);
  SIMPLE_TILE(121, OBSTACLE, 48, 168, 16, 8);
  SIMPLE_TILE(122, OBSTACLE_NONE, 48, 152, 16, 16);
  SIMPLE_TILE(123, OBSTACLE, 0, 176, 8, 16);
  SIMPLE_TILE(124, OBSTACLE, 24, 176, 8, 16);
  SIMPLE_TILE(125, OBSTACLE_NONE, 8, 176, 16, 16);
  SIMPLE_TILE(126, OBSTACLE, 0, 192, 8, 16);
  SIMPLE_TILE(127, OBSTACLE, 24, 192, 8, 16);
  SIMPLE_TILE(128, OBSTACLE_NONE, 8, 192, 16, 16);
  SIMPLE_TILE(129, OBSTACLE, 32, 176, 16, 8);
  SIMPLE_TILE(130, OBSTACLE, 32, 200, 16, 8);
  SIMPLE_TILE(131, OBSTACLE_NONE, 32, 184, 16, 16);
  SIMPLE_TILE(132, OBSTACLE, 48, 176, 16, 8);
  SIMPLE_TILE(133, OBSTACLE, 48, 200, 16, 8);
  SIMPLE_TILE(134, OBSTACLE_NONE, 48, 184, 16, 16);
  SIMPLE_TILE(135, OBSTACLE, 0, 208, 8, 16);
  SIMPLE_TILE(136, OBSTACLE, 24, 208, 8, 16);
  SIMPLE_TILE(137, OBSTACLE, 0, 224, 8, 16);
  SIMPLE_TILE(138, OBSTACLE, 24, 224, 8, 16);
  SIMPLE_TILE(139, OBSTACLE, 8, 208, 16, 16);
  SIMPLE_TILE(140, OBSTACLE, 8, 224, 16, 16);
  SIMPLE_TILE(141, OBSTACLE, 32, 208, 16, 8);
  SIMPLE_TILE(142, OBSTACLE, 32, 232, 16, 8);
  SIMPLE_TILE(143, OBSTACLE, 32, 216, 16, 16);
  SIMPLE_TILE(144, OBSTACLE, 48, 208, 16, 8);
  SIMPLE_TILE(145, OBSTACLE, 48, 232, 16, 8);
  SIMPLE_TILE(146, OBSTACLE, 48, 216, 16, 16);
  SIMPLE_TILE(147, OBSTACLE_NONE, 64, 144, 8, 96);
  SIMPLE_TILE(148, OBSTACLE_NONE, 72, 144, 8, 96);
  SIMPLE_TILE(149, OBSTACLE_NONE, 80, 144, 16, 96);
  SIMPLE_TILE(150, OBSTACLE_NONE, 96, 144, 32, 96);
  SIMPLE_TILE(151, OBSTACLE_NONE, 128, 144, 32, 96);
  SIMPLE_TILE(152, OBSTACLE_NONE, 160, 144, 96, 8);
  SIMPLE_TILE(153, OBSTACLE_NONE, 160, 152, 96, 8);
  SIMPLE_TILE(154, OBSTACLE_NONE, 160, 160, 96, 16);
  SIMPLE_TILE(155, OBSTACLE_NONE, 160, 176, 96, 32);
  SIMPLE_TILE(156, OBSTACLE_NONE, 160, 208, 96, 32);
  SIMPLE_TILE(157, OBSTACLE_NONE, 64, 240, 32, 8);
  SIMPLE_TILE(158, OBSTACLE_NONE, 64, 248, 32, 8);
  SIMPLE_TILE(159, OBSTACLE_NONE, 64, 256, 32, 8);
  SIMPLE_TILE(160, OBSTACLE_NONE, 64, 264, 32, 8);
  SIMPLE_TILE(161, OBSTACLE_NONE, 64, 272, 32, 8);
  SIMPLE_TILE(162, OBSTACLE_NONE, 64, 280, 32, 8);
  SIMPLE_TILE(163, OBSTACLE_NONE, 96, 240, 32, 8);
  SIMPLE_TILE(164, OBSTACLE_NONE, 96, 248, 32, 8);
  SIMPLE_TILE(165, OBSTACLE_NONE, 96, 256, 32, 8);
  SIMPLE_TILE(167, OBSTACLE_NONE, 96, 264, 32, 8);
  SIMPLE_TILE(168, OBSTACLE_NONE, 128, 240, 8, 32);
  SIMPLE_TILE(169, OBSTACLE_NONE, 136, 240, 8, 32);
  SIMPLE_TILE(170, OBSTACLE_NONE, 144, 240, 8, 32);
  SIMPLE_TILE(171, OBSTACLE_NONE, 152, 240, 8, 32);
  SIMPLE_TILE(172, OBSTACLE_NONE, 160, 240, 8, 32);
  SIMPLE_TILE(173, OBSTACLE_NONE, 168, 240, 8, 32);
  SIMPLE_TILE(174, OBSTACLE_NONE, 96, 272, 16, 16);
  SIMPLE_TILE(175, OBSTACLE_NONE, 112, 272, 16, 16);
  SIMPLE_TILE(176, OBSTACLE_NONE, 128, 272, 16, 16);
  SIMPLE_TILE(177, OBSTACLE_NONE, 144, 272, 16, 16);
  SIMPLE_TILE(178, OBSTACLE_NONE, 160, 272, 16, 16);
  SIMPLE_TILE(179, OBSTACLE_NONE, 176, 272, 16, 16);
  SIMPLE_TILE(180, OBSTACLE, 200, 240, 32, 24);
  SIMPLE_TILE(181, OBSTACLE, 232, 240, 24, 32);
  SIMPLE_TILE(182, OBSTACLE, 200, 264, 24, 32);
  SIMPLE_TILE(183, OBSTACLE, 224, 272, 32, 24);
}
