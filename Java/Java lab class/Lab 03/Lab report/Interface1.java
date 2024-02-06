interface Resizable {
    void resize(int width, int height);
}

class Rectangle implements Resizable {
    private int width;
    private int height;

    // Constructor and other methods

    @Override
    public void resize(int width, int height) {
        this.width = width;
        this.height = height;
        System.out.println("Rectangle resized to width: " + width + ", height: " + height);
    }
}

