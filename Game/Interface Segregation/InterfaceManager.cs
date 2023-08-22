using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4.Interface_Segregation
{
    interface IGun
    {
        void Launch();

        void Reload();
    }

    interface IScope
    {
        void Zoom(float value);
    }
    
}
