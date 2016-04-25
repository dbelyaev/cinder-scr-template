#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Application : public App
{
public:
	void setup() override;
	void mouseDown(MouseEvent event) override;
	void update() override;
	void draw() override;
};

void Application::setup()
{
}

void Application::mouseDown(MouseEvent event)
{
}

void Application::update()
{
}

void Application::draw()
{
	gl::clear(Color(0, 1, 0));
}

CINDER_APP(Application, RendererGl)