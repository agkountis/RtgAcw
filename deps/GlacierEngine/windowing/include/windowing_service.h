#ifndef GLACIER_WINDOWING_SERVICE_H_
#define GLACIER_WINDOWING_SERVICE_H_


#include "window.h"
#include "service.h"
#include <vector>

namespace Glacier
{
	class WindowingService : public Service {
	private:
		std::vector<Window*> _windows;

	public:
		WindowingService() : Service(ServiceType::SRV_WINDOWING)
		{ }

		WindowingService(const WindowingService &service) = delete;

		WindowingService &operator=(const WindowingService &service) = delete;

		void add(Window *window);

		//TODO: figure out a nice data structure for traversing and removing windows.
		void remove();

		Window *get_window(unsigned int win_id) const;

		Window *get_window(const std::string &title) const;

		size_t get_window_count() const;
	};
}

#endif //GLACIER_WINDOWING_SERVICE_H_