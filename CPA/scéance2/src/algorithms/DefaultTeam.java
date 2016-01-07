package algorithms;

import java.awt.Point;
import java.util.ArrayList;

/***************************************************************
 * TME 1: calcul de diamètre et de cercle couvrant minimum.    *
 *   - Trouver deux points les plus éloignés d'un ensemble de  *
 *     points donné en entrée.                                 *
 *   - Couvrir l'ensemble de poitns donné en entrée par un     *
 *     cercle de rayon minimum.                                *
 *                                                             *
 * class Circle:                                               *
 *   - Circle(Point c, int r) constructs a new circle          *
 *     centered at c with radius r.                            *
 *   - Point getCenter() returns the center point.             *
 *   - int getRadius() returns the circle radius.              *
 *                                                             *
 * class Line:                                                 *
 *   - Line(Point p, Point q) constructs a new line            *
 *     starting at p ending at q.                              *
 *   - Point getP() returns one of the two end points.         *
 *   - Point getQ() returns the other end point.               *
 ***************************************************************/
import supportGUI.Circle;
import supportGUI.Line;

public class DefaultTeam {

	// calculDiametre: ArrayList<Point> --> Line
	//   renvoie une pair de points de la liste, de distance maximum.
	public Line calculDiametre(ArrayList<Point> points) {
		if (points.size()<3) {
			return null;
		}

		/*******************
		 * PARTIE A ECRIRE *
		 *******************/
                 Point ptmp1 = new Point();
        Point ptmp2 = new Point();
        int liste_size = points.size();
        int distmax, tmp;
        distmax = 0;
        tmp = 0;

        for (Point p : points) {
            for (Point q : points) {
                if(p.equals(q)) continue;
                tmp = (int) (p.distance(q) + 0.5) ;
                if (distmax < tmp) {
                    distmax = tmp;
                    ptmp1.x = p.x;
                    ptmp1.y = p.y;
                    ptmp2.x = q.x;
                    ptmp2.y = q.y;

                }
            }
        }
        
        
        
                
                
                return new Line(ptmp1,ptmp2);
	}
	
	// calculDiametreOptimise: ArrayList<Point> --> Line
		//   renvoie une pair de points de la liste, de distance maximum.
		public Line calculDiametreOptimise(ArrayList<Point> points) {
			if (points.size()<3) {
				return null;
			}

			Point p=points.get(1);
			Point q=points.get(2);
			
			/*******************
			 * PARTIE A ECRIRE *
			 *******************/
			return new Line(p,q);
		}
	
	// calculCercleMin: ArrayList<Point> --> Circle
	//   renvoie un cercle couvrant tout point de la liste, de rayon minimum.
	public Circle calculCercleMin(ArrayList<Point> points) {
		if (points.isEmpty()) {
			return null;
		}

		Point center=points.get(0);
		int radius=100;
		
		/*******************
		 * PARTIE A ECRIRE *
		 *******************/
		return new Circle(center,radius);
	}
	
	// enveloppeConvexe: ArrayList<Point> --> ArrayList<Point>
	//   renvoie l'enveloppe convexe de la liste.
	public ArrayList<Point> enveloppeConvexe(ArrayList<Point> points){
		if (points.size()<3) {
			return null;
		}
		
		ArrayList<Point> enveloppe = new ArrayList<Point>();
		
		enveloppe.add(points.get(0));
		enveloppe.add(points.get(1));
		enveloppe.add(points.get(2));
		
		
		/*******************
		 * PARTIE A ECRIRE *
		 *******************/
		return points;
	}
	
}
