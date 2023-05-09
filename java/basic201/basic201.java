package basic201;

public class basic201 {

	public static void main(String[] args) {
//		helloはインスタンスのフィールドの値(name)など触れないからstaticをつけて使える
		Item.hello();
		Item pc = new Item("パソコン", 100000);

		int price = pc.getPrice();
		System.out.println("価格は" + price + "円です");
		//pcというインスタンスが存在しないと価格設定のsetPriceは使用できないからstaticをつける
		pc.setPrice(80000);
		price = pc.getPrice();
		System.out.println("価格は" + price + "円です");

//		System.out.println("商品名は" + pc.getName() + "です");
//		System.out.println("価格は" + pc.getPrice() + "です");
//		pc.setName("ノートパソコン");
//		pc.setPrice(80000);
//		System.out.println("変更後の商品名は" + pc.getName() + "です");
//		System.out.println("変更後の価格は" + pc.getPrice() + "です");

//		pc.setName("パソコン(旧モデル)");
//		pc.discount();
//		System.out.println("商品名は" + pc.getName() + "です");
//		System.out.println("価格は" + pc.getPrice() + "です");
	}

}
