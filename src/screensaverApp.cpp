#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class screensaverApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void screensaverApp::setup()
{
}

void screensaverApp::mouseDown( MouseEvent event )
{
}

void screensaverApp::update()
{
}

void screensaverApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( screensaverApp, RendererGl )
