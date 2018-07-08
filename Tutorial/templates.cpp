
#include "templates.h"
#include "memory"
#include "Herencia/empleadobasemascomisionh.h"


template auto suma<double, double>(double a, double b) -> decltype(a);
template class std::unique_ptr<EmpleadobasemascomisionH>;

