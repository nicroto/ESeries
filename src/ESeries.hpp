#include "rack.hpp"


using namespace rack;


extern Plugin *plugin;

////////////////////
// helpers
////////////////////

struct ESeriesKnob : SpriteKnob {
	ESeriesKnob() {
		minIndex = 44+5;
		maxIndex = -46-5;
		spriteCount = 120;
		box.size = Vec(48, 48);
		spriteOffset = Vec(-4, -3);
		spriteSize = Vec(64, 64);
		spriteImage = Image::load("plugins/ESeries/res/knob_medium.png");
	}
};

struct ESeriesSwitch : SpriteKnob {
	ESeriesSwitch() {
		minIndex = 1;
		maxIndex = 0;
		spriteCount = 2;
		box.size = Vec(27, 27);
		spriteOffset = Vec(-15, -15);
		spriteSize = Vec(56, 56);
		spriteImage = Image::load("plugins/ESeries/res/switch.png");
	}
};

////////////////////
// module widgets
////////////////////

struct E340Widget : ModuleWidget {
	E340Widget();
};
