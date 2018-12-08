#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "BD.h"

class Application : public wxApp {
	BD *m_BaseDatos;
public:
	virtual bool OnInit();
};

#endif
