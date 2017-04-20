#pragma once

#include<Math\Arithmetic\Float3.hpp>
namespace Environ {

	class Float3::__Float3 {
	public:
		__Float3();
		virtual ~__Float3();

		void Add(const float aX, const float aY, const float aZ);
		float& RefX();
		float& RefY();
		float& RefZ();
	private:
		DirectX::SimpleMath::Vector3 mValue;
	};
}