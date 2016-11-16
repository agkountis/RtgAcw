#ifndef RTGAPPLICATION_H_
#define RTGAPPLICATION_H_
#include "glacier_engine.h"
//#include "../deps/GlacierEngine/windowing/include/d3d/D3D11_window.h"

class RtgApplication : public Glacier::Application {
private:
	Glacier::D3D11Window *win;
	Glacier::D3D11Window *win2;

public:
	~RtgApplication();

	bool initialize(int *argc, char *argv[]) override;

	void update() override;

	void draw() override;

	int run() override;
};

#endif //RTGAPPLICATION_H_