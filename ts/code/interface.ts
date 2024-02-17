export class Person {
    name: string;
    age?: number;

    constructor(name: string, age?: number) {
        this.name = name;
        this.age = age;
    }

    speak(a: string): void {
        console.log(a);
    }

    spend(amount: number): number {
        return amount;
    }
}

console.log("DFgdfg");
console.log("DFgdfg");
console.log("DFgdfg");
