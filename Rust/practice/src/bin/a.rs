use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: i64,
        b: i64,
        c: i64,
        d: String
    }
    println!("{} {}", a+b+c, d);
}
