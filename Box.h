class Box {
    private:
       int length;
       int width;
       int height;
      float volume;
    public:
       // write prototypes of setters for length, width and height
      void setlength(int len);
      void setwidth(int wid);
      void setheight(int h);
       // write prototypes of getters for length, width and height
      int getWidth();
      int getLength();
      int getHeight();  

      int calcVolume();
};
