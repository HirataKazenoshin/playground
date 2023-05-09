package basic201;

public class Item {
	private String name;
	private int price;

	public Item(String name, int price) {
		this.name = name;
		this.price = price;
	}

	public void discount() {
		this.price *= 0.9;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getPrice() {
		return price;
	}

	public void setPrice(int price) {
		this.price = price;
	}
	//インスタンスのフィールドに関係ないメソッドを作ってみる
	public static void hello() {
		System.out.println("hello");
	}

}