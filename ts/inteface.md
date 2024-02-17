## Interfaces
Similar to class but doesn't define or implement the function.

- Iterfaces does not have Inheritence , Polymorphism and other class functions.

```ts
export interface IsPerson {
	name: string;
	age?: number;
	speak(a: string): void;
	spend(a: number): number;
}
```

```ts
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
```