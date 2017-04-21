#pragma once

#include<Math\Arithmetic\Float3.hpp>
namespace Environ {

	class Float3::__Float3:public DirectX::SimpleMath::Vector3 {
	public:

		//‚±‚±‚©‚ç
		__Float3();
		__Float3(float x);
		__Float3(float aX, float aY, float aZ);
		__Float3(const Float3& aV);
		virtual ~__Float3();

		void operator+=(__Float3 aValue);
		void operator+=(float aValue);
		void operator-=(__Float3 aValue);
		void operator-=(float aValue);
		void operator*=(__Float3 aValue);
		void operator*=(float aValue);
		void operator/=(__Float3 aValue);
		void operator/=(float aValue);

		float& RefX();
		float& RefY();
		float& RefZ();
	};
}