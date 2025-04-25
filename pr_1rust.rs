use std::io;
use std::f64;

fn smpl(n: u32) -> bool {
	if n < 2 {
		return false;
	}
	for i in 2..=((n as f64).sqrt() as u32) {
		if n % i == 0 {
			return false;
		}
	}
	true
}

fn main() {
	println!("Введите число:");

	let mut input = String::new();
	io::stdin().read_line(&mut input).unwrap(); 
	let n: u32 = input.trim().parse().unwrap(); 

	for i in 2..=n {
		if smpl(i) {
			print!("{} ", i);
		}
	}
	println!();
}
