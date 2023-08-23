using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Principal;
using System.Text;
using System.Threading.Tasks;

namespace Game.Liskov_Substitution
{
    public abstract class Shape
    {
        protected int width;
        protected int height;

        public abstract int GetArea();
    }

    class Rectangle : Shape
    {
        public void SetWidth(int width)
        {
            this.width = width;
        }

        public void SetHeight(int height)
        {
            this.height = height;
        }

        public override int GetArea()
        {
            return width * height;
        }
    }

    public class Square : Shape
    {
        public void SetSide(int side)
        {
            width = side;
            height = side;
        }

        public override int GetArea()
        {
            return width * height;
        }
    }

}
