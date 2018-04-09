#include<bits/stdc++.h>
#define INF 1000000000
using namespace std;

/**class Point
{
public:
    int x, y;
    Point(int a=0, int b=0):x(a),y(b) {}
};
*/
struct node{
long long x,y;
};

// Utility function to find GCD of two numbers
// GCD of a and b

long long nature(struct node a ,struct node b ,struct node c ,struct node d ){
long long valx,valy;
valx=abs(a.x-b.x);
valy=abs(c.y-d.y);
long long flag=0;
if(valx>valy)flag=1;
return flag;
}
bool onSegment(struct node p, struct node q, struct node r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
            q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
        return true;
    return false;
}
long long orientation(struct node p, struct node q, struct node r)
{
    long long val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // colinear
    return (val > 0)? 1: 2; // clock or counterclock wise
}

bool doIntersect(struct node p1, struct node q1, struct node p2, struct node q2)
{
    // Find the four orientations needed for general and
    // special cases
    long long o1 = orientation(p1, q1, p2);
    long long o2 = orientation(p1, q1, q2);
    long long o3 = orientation(p2, q2, p1);
    long long o4 = orientation(p2, q2, q1);

    // General case
    if (o1 != o2 && o3 != o4)
        return true;

    // Special Cases
    // p1, q1 and p2 are colinear and p2 lies on segment p1q1
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;

    // p1, q1 and p2 are colinear and q2 lies on segment p1q1
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;

    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;

     // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false; // Doesn't fall in any of the above cases
}
bool isInside(struct node polygon[], long long n, struct node p)
{
    // There must be at least 3 vertices in polygon[]
    if (n < 3)  return false;

    // Create a point for line segment from p to infinite
    struct node extreme = {INF, p.y};

    // Count intersections of the above line with sides of polygon
    long long count = 0, i = 0;
    do
    {
        long long next = (i+1)%n;

        // Check if the line segment from 'p' to 'extreme' intersects
        // with the line segment from 'polygon[i]' to 'polygon[next]'
        if (doIntersect(polygon[i], polygon[next], p, extreme))
        {
            // If the point 'p' is colinear with line segment 'i-next',
            // then check if it lies on segment. If it lies, return true,
            // otherwise false
            if (orientation(polygon[i], p, polygon[next]) == 0)
               return onSegment(polygon[i], p, polygon[next]);

            count++;
        }
        i = next;
    } while (i != 0);

    // Return true if count is odd, false otherwise
    return count&1;  // Same as (count%2 == 1)
}

long long gcd(long long a, long long b)
{
    if (b == 0)
       return a;
    return gcd(b, a%b);
}

long long getCount(struct node p, struct node q)
{
    // If line joining p and q is parallel to
    // x axis, then count is difference of y
    // values
    if (p.x==q.x)
        return abs(p.y - q.y) - 1;

    // If line joining p and q is parallel to
    // y axis, then count is difference of x
    // values
    if (p.y == q.y)
        return abs(p.x-q.x) - 1;

    return gcd(abs(p.x-q.x), abs(p.y-q.y))-1;
}

long long getInternalCount(struct node p, struct node q, struct node r)
{
    // 3 extra integer points for the vertices
    long long BoundaryPoints = getCount(p, q) +
                         getCount(p, r) +
                         getCount(q, r) + 3;

    // Calculate 2*A for the triangle
    long long doubleArea = abs(p.x*(q.y - r.y) + q.x*(r.y - p.y)  +
                         r.x*(p.y - q.y));

    // Use Pick's theorem to calculate the no. of Interior points
    return (doubleArea - BoundaryPoints + 2)/2;
}

int main()
{    long long t;
    cin>>t;
    while(t--){

long long n;
cin>>n;
struct node arr[n];
struct node lm,rm,um,bm;
long long lmi,rmi,umi,bmi;
lm.x=1000000000,lm.y=0;
rm.x=-1000000000,rm.y=0;
um.x=0,um.y=-1000000000;
bm.x=0,bm.y=1000000000;
for(long long i=0;i<n;i++){
    cin>>arr[i].x>>arr[i].y;
    if(arr[i].x>rm.x){rm.x=arr[i].x;rm.y=arr[i].y;rmi=i;}
    if(arr[i].x<lm.x){lm.x=arr[i].x;lm.y=arr[i].y;lmi=i;}
    if(arr[i].y>um.y){um.x=arr[i].x;um.y=arr[i].y;umi=i;}
    if(arr[i].y<bm.y){bm.x=arr[i].x;bm.y=arr[i].y;bmi=i;}
}
//cout<<" lm = "<<lm.x<<","<<lm.y<<" index= "<<lmi<<endl;
//cout<<" rm = "<<rm.x<<","<<rm.y<<" index= "<<rmi<<endl;
//cout<<" um = "<<um.x<<","<<um.y<<" index= "<<umi<<endl;
//cout<<" bm = "<<bm.x<<","<<bm.y<<" index= "<<bmi<<endl;

/**long long coe=0;
for(int i=0;i<n-1;i++){
    coe=coe+getCount(arr[i],arr[i+1]);
    cout<<" integral point b/w "<<arr[i].x<<","<<arr[i].y<<" and "<<arr[i+1].x<<","<<arr[i+1].y<<" = "<< getCount(arr[i],arr[i+1])<<endl;
}
coe+=getCount(arr[0],arr[n-1]);
cout<<" external= "<<coe<<endl;
//now co will contain the total no. of integral points lies on the boundary;
*/
long long cie=0;
for(long long i=2;i<=n-2;i++){cie+=getCount(arr[0],arr[i]);}
//cie=cie-((n-3)*2);
long long tp=0;
for(long long i=1;i<=n-2;i++){
   tp+= getInternalCount(arr[0], arr[i], arr[i+1]);
}
//cout<<tp<<endl;

//cout<<cie<<endl;
tp+=cie;
float d=n/10;
long long limit=floor(d);
//cout<<tp<<endl;
if(d>tp){cout<<"-1"<<endl;}
else{
long long p=nature(lm,rm,um,bm);
long long in=0,ot=0,x=0;
if(p==0){
        long long m=(lm.x+rm.x)/2,ll=0;
        for(long long i=m;ll<rm.x-m;ll++){
                for(long long j=bm.y-1;j<um.y;j++ ){
    struct node poi;
    poi.x=i;poi.y=j;
   if( isInside(arr, n, poi)){cout<<i<<" "<<j<<endl;x++;}
   if(x==limit){in=1;break;}
poi.x=m-ll-1;poi.y=j;
if( isInside(arr, n, poi)){cout<<poi.x<<" "<<j<<endl;x++;}
   if(x==limit){in=1;break;}
                }
                if(in==1){break;}
        }
}
else{
long long m=(um.y+bm.y)/2;
long long ll=0;
    for(long long i=m;ll<um.y;ll++){
                for(long long j=lm.x+1;j<rm.x;j++ ){
    struct node poi;
    poi.x=j;poi.y=i;
   if( isInside(arr, n, poi)){cout<<j<<" "<<i<<endl;x++;}
   if(x==limit){in=1;break;}
    poi.x=j;poi.y=m-ll-1;
   if( isInside(arr, n, poi)){cout<<j<<" "<<poi.y<<endl;x++;}
   if(x==limit){in=1;break;}
                }
                if(in==1){break;}
        }

}

}



    }
return 0;}
/**

int main()
{
    Point p(1, 9);
    Point q(8, 16);

    cout << "The number of integral points between "
         << "(" << p.x << ", " << p.y << ") and ("
         << q.x << ", " << q.y << ") is "
         << getCount(p, q);

    return 0;
}
*/
