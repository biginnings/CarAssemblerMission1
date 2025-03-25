class CarAssembler {
private:
	static CarAssembler* instance;
	CarAssembler() {}

public:
	static CarAssembler *getInstance() {
		if (instance==nullptr) {
			return new CarAssembler();
		}
		return instance;
	}

	static void destroyInstance() {
		delete instance;
		instance = nullptr;
	}

};