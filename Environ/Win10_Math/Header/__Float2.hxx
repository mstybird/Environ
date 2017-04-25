#pragma once

#include<Math\Arithmetic\Float2.hpp>
namespace Environ {

	class Float2::__Float2:public DirectX::SimpleMath::Vector2 {
	public:

		//‚±‚±‚©‚ç
		__Float2();
		__Float2(float x);
		__Float2(float aX, float aY);
		virtual ~__Float2();

		void operator+=(__Float2 aValue);
		void operator+=(float aValue);
		void operator-=(__Float2 aValue);
		void operator-=(float aValue);
		void operator*=(__Float2 aValue);
		void operator*=(float aValue);
		void operator/=(__Float2 aValue);
		void operator/=(float aValue);

		float& RefX();
		float& RefY();
	};
}