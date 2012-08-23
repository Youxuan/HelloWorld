#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HelloWordApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void HelloWordApp::setup()
{
}

void HelloWordApp::mouseDown( MouseEvent event )
{
}

void HelloWordApp::update()
{
}

void HelloWordApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 255, 255, 0 ) ); 
}

CINDER_APP_BASIC( HelloWordApp, RendererGl )
